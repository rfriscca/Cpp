#ifndef PONY_H
# define PONY_H

class Pony {
	public :
		Pony(void);
		~Pony(void);
		void	walk(void);
		void	run(void);
		int		getSpeed(void);

	private :
		int		speed;
};

#endif
