#include <iostream>
#include <sstream>
using namespace std;
struct mtrx{
bool Succes;
int Row;
int Column;
float **Matrix;
};
mtrx sum(float **matrix1, int columns1,int rows1,float **matrix2, int columns2, int rows2){
  mtrx result;
   if ((rows1==rows2)&&(columns1==columns2)){
        for(int j=0;j<rows1;j++){
for(int i=0; i<columns1;i++){
                result.Matrix[j][i]=matrix1[j][i]+matrix2[j][i];
}
}result.Succes=true;result.Column=column1;result.Row=rows1;
}else{result.Succes=false;}
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
	 
        mtrx Mat1sign;
mtrx Mat2sign;
string strop;
char op;
Mat1sign=getfullMatrix();
getline(cin, strop);
istringstream streamop(strop);
streamop>>op;
if(Mat1sign.Succes){switch(op){
case ‘T’:
    break;
case ‘R’:
    break;
default:if((op!=‘+’)&&(op!=‘-‘)&&(op!=‘*’)){}
    break;
}}
Mat2sign=getfullMatrix(); 

  if(Mat2sign.Succes){
          switch(op){
case ‘+’:
break;
case ‘*’:
break;
case ‘-‘:
break;

}


}
        




  }