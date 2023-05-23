#include<iostream>
#include<list>
using namespace std;
class Youtube {
    public:
    string ownerName;
    string channelName;
    int subscribers;
    list <string>videos;
};
int main ()
{
Youtube first;
first.ownerName="Ankita Gupta";
cout<<"Love u dear";
first.channelName="Ankita the artist";
first.subscribers=10009;
first.videos={"Introduction to me ","My programming journey "};

cout<<"Owner Name"<< first.ownerName<<endl;
cout<<"Channel Name"<<first.channelName<<endl;
cout<<"Subscribers"<<first.subscribers<<endl;
cout<<"VIDEOS IN THE CHANNEL"<<endl;
for(string videosName : first.videos){
    cout<<videosName<<endl;
}
 
return 0;
}