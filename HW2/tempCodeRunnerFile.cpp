    cout <<"\n\n";
    cout << vipadd;
    cout <<"\n\n";
    
    
    int n = vipadd.length();
    
    
    char str[n+1];
    
    strcpy(str, vipadd.c_str());
 
    for (int i = 0; i < n; i++)
        cout << str[i];
     
    cout <<"\n\n";
    
    // Returns first token  
    char *token = strtok(str, "."); 
    
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) 
    { 
        printf("%s\n", token); 
        token = strtok(NULL, ".");
        
    } 
  cout <<"\n\n";
  cout << vipadd.length();
  cout <<"\n";

    for(int h = 0; h < vipadd.size(); h++) 
        cout << vipadd[h] << '\n';

vector <string> tokens;

stringstream check1(vipadd);

string intermediate; 

 while(getline(check1, intermediate, '.')) 
    { 
        tokens.push_back(intermediate); 
    } 

 cout <<"\n\n";
 for(int j = 0; j < tokens.size(); j++) 
        cout << tokens[j] << '\n'; 

cout <<"\n\n";
cout << tokens[0];
cout <<"\n\n";

    int ip_add_a[] = {};

 cout <<"\n\n";
 for(int k = 0; k <= 3; k++) 
        ip_add_a[k] = std::stoi(tokens[k]); 
   


    cout <<"\n\n";
    cout <<ip_add_a[0];
    cout <<ip_add_a[1];
    cout <<ip_add_a[2];
    cout <<ip_add_a[3];

    cout <<"\n\n";

    if ((ip_add_a[0]<=255) && (ip_add_a[0]>=0) && (ip_add_a[1]<=255) && (ip_add_a[1]>=0) && (ip_add_a[2]<=255) && (ip_add_a[2]>=0) && (ip_add_a[3]<=255) && (ip_add_a[3]>=0)){
        cout <<vipadd <<" VALID IP ADDRESS\n";
    }
    else
    {
        cout <<vipadd <<" INVALID IP ADDRESS\n";
    }
    
