#include "stdafx.h"
#include<iostream>
#include"Film.h"
#include "Exeption.h"
#define NDEBUG <cassert>
#include <cassert>    
using namespace std;
memory x;
leng regular;
empty zero;
//void ex()
//{
//	Set<int> x;
//	x + 1;
//	x + 5;
//	x + 1;
//	x + 14;
//	x + 6;
//	cout << "A1=" << x;
//	Set<int> u;
//	u + 2;
//	u + 1;
//	u + 5;
//	u + 6;
//	Set<int> r;
//	r + 1;
//	r + 5;
//	r + 1;
//	cout << "C1=" << r;
//	cout << "B1=" << u;
//	cout << "B1*A1=" << *(u*x);
//	cout << "C1*B1=" << *(r*u);
//	cout.setf(ios::boolalpha);
//	cout << "B1<A1 " << (u < x) << endl;
//	cout << "C1<A1 " << (r < x) << endl;
//	cout << "C1<B1 " << (r < u) << endl;
//	cout << "M|A1|=" << x() << endl;
//	cout << "M|B1|=" << u() << endl;
//	cout << "M|C1|=" << r() << endl;
//	cout << "A1[2]=" << x[2] << endl;
//	cout << "B1[3]=" << u[3] << endl;
//	cout << "C1[1]=" << r[1] << endl;
//	minimum(x);
//	minimum(u);
//	minimum(r);
//	cout << endl;
//
//
//	cout << "***************************" << endl << endl;
//
//
//	Set<double> p;
//	p + 1.5;
//	p + 5.5;
//	p + 1.2;
//	p + 14.8;
//	p + 6.1;
//	cout << "A2=" << p;
//	Set<double> y;
//	y + 2.1;
//	y + 1.2;
//	y + 5.2;
//	y + 6.1;
//	Set<double> w;
//	w + 1.1;
//	w + 5.89;
//	w + 1.8;
//	w + 6.1;
//	cout << "C2=" << y;
//	cout << "B2=" << w;
//	cout << "B2*A2=" << *(y*w);
//	cout << "C2*B2=" << *(p*w);
//	cout << "B2<A2 " << (p < y) << endl;
//	cout << "C2<A2 " << (w < y) << endl;
//	cout << "C2<B2 " << (w < p) << endl;
//	cout << "M|A2|=" << p() << endl;
//	cout << "M|B2|=" << y() << endl;
//	cout << "M|C2|=" << w() << endl;
//	cout << "A2[2]=" << p[2] << endl;
//	cout << "B2[3]=" << w[3] << endl;
//	cout << "C2[1]=" << y[1] << endl;
//	minimum(p);
//	minimum(y);
//	minimum(w);
//	cout << endl;
//
//
//	cout << "***************************" << endl << endl;
//
//	Set<Film> s;
//	s + Film(1998, "Konik");
//	s + Film(2002, "Slonik1");
//	cout << "Film1=" << s;
//	Set<Film> a;
//	a + Film(2002, "Slonik1");
//	a + Film(2004, "Slonic2");
//	a + Film(1998, "Konic");
//	Set<Film> j;
//	j + Film(2008, "Kozlic1");
//	j + Film(2010, "Kozlic2");
//	j + Film(1998, "Konic");
//	j + Film(2014, "Kozlic4");
//	cout << "Film2=" << a;
//	cout << "Film3=" << j;
//	cout << "Film2*Film1=" << *(s*a);
//	cout << "Film3*Film2=" << *(j*a);
//	cout << "Film2<Film1 " << (a < s) << endl;
//	cout << "Film3<Film1 " << (j < s) << endl;
//	cout << "M|Film1|=" << s() << endl;
//	cout << "M|Film2|=" << a() << endl;
//	cout << "M|Film3|=" << j() << endl;
//	cout << "Film1[2]=" << s[2] << endl;
//	cout << "Film2[3]=" << a[3] << endl;
//	cout << "Film3[1]=" << j[1] << endl;
//	cout << "Minimalny god iz filmov1: ";
//	minimum(s);
//	cout << "Minimalny god iz filmov2: ";
//	minimum(a);
//	cout << "Minimalny god iz filmov3: ";
//	minimum(j);
//	cout << endl;
//
//
//	cout << "*******************************" << endl;
//	smell(A::rose());     smell(B<A>::foo());     return 0;}

const int max = 10;

template <class Rere>
class Set
{
public:
	Rere* set;
	int length;
	friend bool operator>(Rere el, Set& s)//проверка на принадлежность
	{
		for (int i = 0; i < s.length; i++)
		{
			if (s.set[i] == el)
				return true;
		}
		return false;
	}
	friend void operator+(Set& s, Rere el)//добавление
	{
		if (s.length == max-1)
		{
			throw& s;
		}
		if (!(el > s))
		{
			s.set[s.length] = el;
			s.length++;
		}
		else
		{
			same sobaka(el);
			throw  sobaka;
		};
	}
	friend ostream& operator<<(ostream& ost, Set& s)//вывод
	{
		int i = 0;
		ost << "{";
		if (s.length == 0) throw zero;
		for (i = 0; i < (s.length - 1); i++)
		{
			ost << s.set[i] << " , ";
		}
		ost << s.set[i] << "}\n";
		return ost;
	}


	Set()
	{
		set = new Rere[max];
		length = 0;
	}
	Set(int wer)
	{
		set = new Rere[wer];
		length = 0;
	}
	~Set()
	{
		delete[]set;
	}

	Set* operator*(Set& tet)//пересечение множеств
	{
		Set* t = new Set;

		for (int i = 0; i < length; i++)
		{
			if (set[i]>tet)
			{
				*t + set[i];
			}
		}

		return t;
	}

	bool operator<(Set& re)//проверка на подмножество
	{
		if (length>re.length)
		{
			return false;
		}
		else
		for (int i = 0; i < length; i++)
		{
			if (!(set[i]>re))
				return false;
		}
		return true;
	}

	int operator()()//мощность
	{
		return length;
	}

	Rere operator[](int i)//проверка элемента
	{

		return set[i];
	}

};
template  <class Vav>
void minimum(Set<Vav>& tete)
{
	Vav min = tete.set[0];
	for (int i = 0; i < tete.length; i++)
	{
		if (tete.set[i] < min)
		{
			min = tete.set[i];
		}
	}
	cout << "Minimum: " << min << endl;
}

template  <>

void minimum(Set<Film>& tete)
{
	int min = tete[1].god;
	for (int i = 1; i <= tete.length; i++)
	{
		if (tete[i].god < min)
		{
			min = tete[i].god;
		}
	}
	cout << min << endl;
}
void print_adds(Set<int>* value)
{
	assert(value != NULL);
	std::cout << "Adress in memory = "
		<< value << std::endl;
}
//10,16,25
int _tmain(int argc, _TCHAR* argv[])
{
	Set<int>* pol=NULL;
	try// проверка памяти
	{
		if (pol == NULL)throw x;
		*pol + 1;
		
	}

	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}

	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Ne rabotaet!" << endl;
	}


	leng Y;
	cout << *pol << endl;
	
	try //проверка на непревышение длины(неправильный индекс)
	{
		int i = 12;
		if (!(i >= 0 && i <= pol->length))
			throw regular;
		cout << pol[12] << endl;
		
	}
	/*catch (leng t)
	{
		
		t.print();

	}*/

	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}


	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Ne rabotaet!" << endl;
	}







	try//проверка на пустое множество
	{
		
		Set<int> kit;
		cout << kit<<endl;

	}

	/*catch (empty w)
	{

		w.print();

	}*/



	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}



	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Ne rabotaet!!" << endl;
	}







	try//проверка на повторяющиеся элементы
	{

		Set<int> kot;
		kot + 2;
		kot + 5;
		kot + 4;
		kot + 8;
		cout << kot << endl;
		kot + 5;
	}

	/*catch (same o)
	{

		o.print();


	}*/



	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}


	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Ne rabotaet!" << endl;
	}






	Set<int> vuv;

	try//переполнение
	{

		
		vuv + 16;
		vuv + 95;
		vuv + 41;
		vuv + 89;
		vuv + 74;
		vuv + 52;
		vuv + 53;
		vuv + 64;
		vuv + 57;
		vuv + 11;
		vuv + 81;
		cout << vuv << endl;
	}

	//catch (Set<int>* p)
	//{
	//	
	//	Set<int> temp;
	//	for (int i = 0; i < p->length; i++)
	//	{
	//		temp + p->set[i];
	//	}
	//	p = new Set<int>(100);
	//	/*p->length = 0;
	//	p->set = NULL;
	//	p->set = new int[100];*/
	//	
	//	for (int i = 0; i < temp.length; i++)
	//	{
	//		p + temp.set[i];
	//	}
	//	
	//	cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
	//	//cout <<temp << endl;
	//	//cout << *p << endl;

	//}
	//cout << vuv << endl;
	


	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}


	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Ne rabotaet!" << endl;
	}
	//cout << vuv << endl;


	try
	{
	int	i = 3;
	if(i-3==0)
		throw i;
		cout<<2 / (i-3);
		
	}


	catch (same o)
	{

		o.print();


	}
	catch (empty w)
	{

		w.print();

	}
	catch (leng t)
	{

		t.print();

	}
	catch (memory X)
	{
		pol = new Set<int>;
		X.print();
		*pol + 1;
	}

	
	catch (Set<int>* p)
	{

		Set<int> temp;
		for (int i = 0; i < p->length; i++)
		{
			temp + p->set[i];
		}
		p = new Set<int>(100);
		/*p->length = 0;
		p->set = NULL;
		p->set = new int[100];*/

		for (int i = 0; i < temp.length; i++)
		{
			p + temp.set[i];
		}

		cout << "Exception5. Overflow.Max size 10\n Memory was reserve.\n Now is OK\n";
		//cout <<temp << endl;
		//cout << *p << endl;

	}



	catch (...)
	{
		cout << "Nye rabotaet!" << endl;
	}

	Set<int> *kryshka=NULL;
	Set<int> krushka ;
	/*assert(&kryshka==NULL)
	{

	}
*/

	print_adds(&krushka);
	print_adds(kryshka);



	return 0;
}

