data_dict= {"Tetrahedron":4,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20}
input_list=[]
sum=0

n=int(input())

for i in range(n):
	x=input()
	input_list.append(x)

for polyhedron in input_list:
	if polyhedron in data_dict:
		sum+=data_dict[polyhedron]
		#print("sum is",sum)

print(sum)