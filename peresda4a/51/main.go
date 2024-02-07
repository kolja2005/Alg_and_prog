 

type Cat struct {
	live int
}

func (c Cat) is_alive() bool {
	if c.live == 1 {
		return true
	}
	return false

}

type Box struct {
}

func (c Box) open() Cat {
	cat := Cat{}
	cat.live = rand.Int() % 2
	return cat
}