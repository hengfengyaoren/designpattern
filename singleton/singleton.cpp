template<typename T>
class Singleton{
public:

	static T& Getinstance(){
		static T instance;
		return instance;
	}
protected:
	virtual ~Singleton(){}
	Singleton(){}
	Singleton(const Singleton&){}
	Singleton& operator=(const Singleton&){}
};


class DesignPattern : public Singleton<DesignPatter>{
	friend class Singleton<DesignPattern>;

private:
	DesignPattern(){}
	DesignPattern(const DesignPattern&){}
	DesignPattern& operator=(const DesignPaatern&){}:
};



