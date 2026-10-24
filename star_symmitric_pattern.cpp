void pattern2(){
    for(int i=0;i<9;i++){
        if (i<5){
             for(int j=0;j<=i;j++){
                 cout<<"* ";
             }
        }
        else{
            for(int j=0;j<10-i-1;j++){
                cout<<"* ";
            }
        }   
        cout<<endl;  
        }
}