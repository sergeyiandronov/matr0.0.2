#include <iostream>
#include <sstream>
using namespace std;

bool getMatrix(float **matrix,int ncolumns,int nrows){


	for(int j=0;j<nrows;j++){
                   		string newrow;	
	       getline(cin,newrow);
	       istringstream stream(newrow);
	       for(int i=0;i<ncolumns;i++){
	       	if(!(stream>>matrix[j][i])){
	       		return false;
	       	}
	       }
	}
	return true;
	
}

void coutMatrix(float **matrix,int ncolumns,int nrows){
	for(int j=0;j<nrows;j++){
	       for(int i=0;i<ncolumns;i++){
	       	
	       	cout<<matrix[j][i]<<" ";
	       }cout<<"\n";
	}
}
int main(){
	 float **matrix;int columns=3;int rows=3;
        string header;
        char razdel;
       
     
        getline(cin,header);
        istringstream str(header);
        if((str>>rows)&&(str>>razdel)&&(str>>columns)&&(razdel==',')){
     float ** matrix = new float *[ rows ];
for(  int i = 0; i < rows; ++i ) {
    matrix[ i ] = new float[ columns ];
    for( int j = 0; j < columns; ++j ) {
        matrix[ i ][ j ] = 0.0f;
    }
}cout<<"yer"<<rows;cout<<matrix[0][0]<<"\n";}
	for(int j=0;j<rows;j++){
	       for(int i=0;i<columns;i++){
	       	
	       	cout<<matrix[j][i]<<" ";
	       }cout<<"\n";
	}

  }
