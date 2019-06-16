#Program to implement set difference operation
from __future__ import print_function
n1=int(raw_input("Enter the number of elements in the first set"))
n2=int(raw_input("Enter the number of elements in the second set"))
set1=[]									#for the first set A
set2=[]									#for the second set B
set3=[]									#for A-B
set4=[]									#for B-A
counter1=0
counter2=0						#for no elements in the resulting set
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
	if(i!=n1-1):				#if middle element, print "," after it
		print (set1[i],",", end='')
	else:
		print (set1[i],"}", end='')	#if last element, print "}" after it
print("\n\nThe second set is\n\nB={", end='')
for i in range (0,n2):
	if(i!=n2-1):
		print (set2[i],",", end='')
	else:
		print (set2[i],"}", end='')
for i in set1:
	for j in set2:				
		flag=0
		if(i==j):			#if the element is common to both sets
			flag=1
			break
	if(flag==0):				#if it belongs to only the first set
		set3.append(i)
		counter1=counter1+1
for i in set2:
	for j in set1:				
		flag=0
		if(i==j):			#if the element is common to both sets
			flag=1
			break
	if(flag==0):				#if it belongs to only the second set
		set4.append(i)
		counter2=counter2+1
print("\n\nThe difference of the sets is", end='')
if(counter1==0):
	print("\n\nA-B equates to a null set {}", end='')
else:
	print("\n\nA-B={", end='')
	for i in range (0,counter1):
		if(i!=counter1-1):
			print (set3[i],",", end='')
		else:
			print (set3[i],"}", end='')
if(counter2==0):
	print("\n\nB-A equates to a null set {}", end='')
else:
	print("\n\nB-A={", end='')
	for i in range (0,counter2):
		if(i!=counter2-1):
			print (set4[i],",", end='')
		else:
			print (set4[i],"}", end='')
