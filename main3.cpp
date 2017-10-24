#include <iostream>
#include <sstream>
using namespace std;
struct mtrx{
bool Succes;
int Row;
int Column;
float **Matrix;
};
mtrx InitZero(int columns,int rows){
mtrx result;
float **matrix;

     matrix = new float *[ rows];
for(  int i = 0; i < rows; ++i ) {
    matrix[ i ] = new float[ columns];
for( int j = 0; j < columns; ++j ) {
        matrix[ i ][ j ] = 0.0f;
    }
}
result.Succes=true;result.Matrix=matrix;result.Column=columns;result.Row=rows;
return result;
	
}
mtrx sum(mtrx Mat){
     mtrx result;
     result=InitZero(Mat.Column,Mat.Row);
     result.Matrix[0][0]=1;
     return result;
}
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
	mtrx Mat3sign;
	 
        mtrx Mat1sign;
mtrx Mat2sign;
string strop;
char op;
Mat1sign=getfullMatrix();
getline(cin, strop);
istringstream streamop(strop);
streamop>>op;
if(Mat1sign.Succes){switch(op){
case 'T':
    break;
case 'R':
    break;
default:if((op!='+')&&(op!='-')&&(op!='*')){}
    break;
}}
Mat2sign=getfullMatrix(); 

  if(Mat2sign.Succes){
          switch(op){
case '+':
Mat3sign=sum(Mat2sign);
break;
case '*':
break;
case '-':
break;

}


}
        
if(Mat3sign.Succes){
	coutMatrix(Mat3sign.Matrix,Mat3sign.Column,Mat3sign.Row);
}



  }
