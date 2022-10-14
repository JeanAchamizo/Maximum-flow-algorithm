
class Arcos {
private:
	int i;
	int j;
	int Capacidad;
	int Acumulados;
	bool Existe;
public:
	Arcos(int indI,int indJ){
		i = indI;
		j = indJ;
		Capacidad = 00;
		Acumulados = 00;
		Existe = false;
	}
	~Arcos(){}
	int ObtCapacidad() { return	Capacidad; }
	int ObtAcumulados() { return Acumulados; }
	
	void AsigCapacidad(int value){
		Capacidad = value;
		if (Capacidad != 0)Existe = true;
	}
	void AsigAcumulados(int value){
		Acumulados = value;
		if (Acumulados == Capacidad) {
			Existe = false;
		}
	}
	bool ExisteArco() {
		return Existe;
	}

	void NoExiste() {
		Existe = false;
	}

	void RestrablecerExistencia() {
		Existe = Capacidad != 0 ;
	}

	int IndI() { return i; }
	int IndJ() { return j; }
};