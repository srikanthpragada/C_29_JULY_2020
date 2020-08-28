struct time
{
  char name[20];
  int hours, mins, secs;
};

void print_time(struct time t)
{
   printf("\n%s %02d:%02d:%02d",t.name, t.hours, t.mins, t.secs);
}
void main()
{
  struct time st;
  struct time et = {"Jason", 1,2,3};  // Initializing struct time

    strcpy(st.name,"Larry");
    st.hours = 10;
    st.mins = 20;
    st.secs = 30;

    print_time(st);
    print_time(et);
}
