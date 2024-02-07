type Water struct {
	temperature int
}
type Teapot struct {
	w Water
}

func NewWater(t int) Water {
	return Water{temperature: t}
}
func NewTeapot(water Water) Teapot {
	return Teapot{w: water}
}
func (t *Teapot) is_boiling() bool {
	return t.w.temperature >= 100
}
func (t *Teapot) heat_up(n int) {
	t.w.temperature += n
}