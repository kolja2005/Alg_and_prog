#include <vector>
class Clock : public IRunnable, public IClock{
private:
    std::vector<std::pair<Time, IRunnable*>> array;
public:
    void add(IRunnable* client, Time time) override {
        array.push_back(std::make_pair(time, client));
    }
    bool next() override {
        if (!array.empty()) {
            std::pair<Time,IRunnable*> p = array[0];
            Time t = p.first;
            IRunnable* r = p.second;
            t.hours < 10 ? std::cout << "0" << t.hours<<":" : std::cout << t.hours<<":";
            t.minutes < 10 ? std::cout << "0" << t.minutes <<":" : std::cout << t.minutes << ":";
            t.seconds < 10 ? std::cout << "0" << t.seconds : std::cout << t.seconds;
            r->run();
            array.erase(array.begin());
            return true;
        }
        else{
            return false;
        }

    }
    void run() override {
        while (next());
    }
};

class OSUpdater : public IRunnable {
    void run() override {
        std::cout << " OSUpdater\n";
    }
};
class Alarm : public IRunnable {
    void run() override {
        std::cout << " Alarm\n";
    }
};
class ActivityChecker : public IRunnable {
    void run() override {
        std::cout << " ActivityChecker\n";
    }
};