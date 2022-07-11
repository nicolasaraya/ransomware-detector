#ifndef ResourcesMonitor_H
#define ResourcesMonitor_H
#include <vector>
#include <string>
#include <map> 

using namespace std; 

typedef struct{
    float cpu;
    float memory;
}Data;

class ResourcesMonitor{
    private:
        void exec();
        void createMap();
        vector<string> out;
        map<int, Data*> datos;
        map<int, Data*> datosPrev; 
    public:
        ResourcesMonitor();
        ~ResourcesMonitor();
        bool ScanResources();
};


#endif