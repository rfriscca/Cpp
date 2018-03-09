
#include <string>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
	public :
		Contact(void);
		~Contact(void);
		static int	getNumberOfContacts(void);
		void		displayInfo(void);
		void		displaySummaryInfo(void);

	private :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	login;
		std::string	postaladdress;
		std::string	email;
		std::string	phonenumber;
		std::string	birthday;
		std::string	favmeal;
		std::string	underwearcolor;
		std::string	darkestsecret;

};

#endif
