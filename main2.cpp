#include <iostream>
#include <sstream>
using namespace std;
struct mtrx{
bool Succes;
int Row;
int Column;
float **Matrix;
};
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
mtrx getfullMatrix(){
mtrx result;
float **matrix;
string header;
int rows;
int columns;
        char razdel;
       getline(cin,header);
        istringstream str(header);
        if((str>>rows)&&(str>>razdel)&&(str>>columns)&&(razdel==',')){
     matrix = new float *[ rows];
for(  int i = 0; i < rows; ++i ) {
    matrix[ i ] = new float[ columns];
for( int j = 0; j < columns; ++j ) {
        matrix[ i ][ j ] = 0.0f;
    }
}result.Succes=getMatrix(matrix,columns,rows);result.Row=rows;result.Column=columns;result.Matrix=matrix;return result;}result.Succes=false;return result;}
int main(){
	 
        mtrx Mat1sign;
mtrx Mat2sign;
Mat1sign=getfullMatrix();

Mat2sign=getfullMatrix(); 
     
        
if(  Mat1sign.Succes){
  coutMatrix(Mat1sign.Matrix,Mat1sign.Column,Mat1sign.Row);
}
 if( Mat2sign.Succes){
coutMatrix(Mat2sign.Matrix,Mat2sign.Column,Mat2sign.Row);

}


  }
