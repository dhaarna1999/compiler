
x=[0:4];
i1=[7.8,2.4,2,2.2,3.4];
i2=[10,1.9,1.8,1.7,7.9];
i3=[7.9,2.4,1.7,2.1,4.3];
i4=[3.2,1,1.2,0.8,1.9];
i5=[9.4,3.3,3.1,3.1,8.2];
y=(i1+i2+i3+i4+i5)/5;

plot(x,y);
ylabel('time in 10^(-5) sec');
names = {'brute'; 'rabinkarp'; 'horspool'; 'kmp';'simon'};
set(gca,'xtick',[0:4],'xticklabel',names)


