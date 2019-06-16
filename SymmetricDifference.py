from __future__ import print_function
n1=int(raw_input("Enter the number of elements in the first set"))
n2=int(raw_input("Enter the number of elements in the second set"))
set1=[]									
set2=[]									
set3=[]							
set4=[]								
counter=0						
print("\nEnter the elements of the first set\n")
for i in range (0,n1):
	x=raw_input()
	set1.append(x)
print("\nEnter the elements of the second set\n")	
for i in range (0,n2):
	x=raw_input()
	set2.append(x)
print("\nThe first set is\n\nA={", end='')
for i in range (0,n1):
	if(i!=n1-1):				
		print (set1[i],",", end='')
	else:
		print (set1[i],"}", end='')	
print("\n\nThe second set is\n\nB={", end='')
for i in range (0,n2):
	if(i!=n2-1):
		print (set2[i],",", end='')
	else:
		print (set2[i],"}", end='')
for i in set1:
	for j in set2:				
		flag=0
		if(i==j):			
			flag=1
			break
	if(flag==0):				
		set3.append(i)
		counter=counter+1
for i in set2:
	for j in set1:				
		flag=0
		if(i==j):			
			flag=1
			break
	if(flag==0):				
		set3.append(i)
		counter=counter+1
print("\n\nThe symmetric difference of the sets is", end='')
print("\n\n{", end='')
for i in range (0,counter):
	if(i!=counter-1):
		print (set3[i],",", end='')
	else:
		print (set3[i],"}", end='')
