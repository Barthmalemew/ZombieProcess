 #include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    // Fork returns process id 
    // in parent process 
    pid_t fork_pid = fork(); 
  
    // Parent process  
    if (fork_pid > 0) 
        sleep(50); 
  
    // Child process 
    else        
         
    return 0; 
} 
