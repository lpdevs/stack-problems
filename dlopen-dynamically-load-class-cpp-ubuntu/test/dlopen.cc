#include <iostream>
#include <dlfcn.h>
#include "../plugin.h"

using namespace std;

int main()
{
	void * handle;
	PluginFactory * myFactory;
   	Plugin * myPlugin;

  
    	if ( !( handle = dlopen("../foo.so", RTLD_LAZY) ) )
    	{  
		cout << "Could not open library " << " : " << dlerror() << endl;  
		return -1;  
    	}

   	if ( !( myFactory = (PluginFactory *)dlsym(handle, "gFooFactory") ) )
    	{  
		cout << "Could not find Factory " << endl;  
		return -1;  
    	}

    	myPlugin = myFactory->getInstance();
   	myPlugin->test();
    	delete myPlugin;

    	dlclose(handle);
    	return 0;
}
