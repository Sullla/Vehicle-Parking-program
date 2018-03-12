#include "CarParkManager.h";
#include "Car.h";
#include "Motorbike.h";
#include "TruckORVan.h";

Car cararray[20];
Car cararrayColor[20][2];
Motorbike cararray3[20][2];
TruckorVan cararray2[20][2];
Car lol;
Motorbike motor;
TruckorVan torv;
char vehicleType;
int vehicleNumber = 0;

char choose;
int end = 0;
int counter = 5;
int counter2 = 5;
int counter3 = 10;


int prcntCars = 0;
int prcntVans = 0;
int prcntMotorbike = 0;
int overall = 20;
void parking::add()
{

	string brandname;
	string color2;
	int numOfd;
	int volume;
	int sizeofengine;

	cout << "\tPlease choose the brand name of your car please" << endl;
	cin >> brandname;
	cout << "\n\tPlease choose type of vehicle \n\t1.(Car)\n\t3.(Truck or Van) \n\t2.(Motorcycle) ";
	cin >> choose;
	
	switch (choose) {
	case '1':
		if (counter == 0) 
		{
			cout << "---Sorry, all parking slots are taken---" << endl;
		}
		else {
			cout << "\t\t PLease enter ID name of your car.: ";
			cin >> idnum;
			lol.setid(idnum);
			idNum[i] = lol.getid();
			cararray[i].setbrand(brandname);
			cout << "Enter please the color of the car" << endl;
			cin >> color2;
			cararrayColor[i][0].setcolor(color2);
			cout << "Enter number of doors that car has please" << endl;
			cin >> numOfd;
			cararrayColor[i][1].setnod(numOfd);
			cout << "Enter month please" << endl;
			cin >> mnth[i];
			cout << "Enter day please" << endl;
			cin >> date[i];
			cout << "Please enter hours please:" << endl;
			cin >> hr[i];
			cout << "Please enter minutes please:" << endl;
			cin >> mins[i];
			i++;
			counter = counter - 1;
			vehicleNumber = 1;
			prcntCars++;;
		}
		break;
	case '2':
		if (counter2 == 0)
		{
			cout << "---Sorry, all parking slots are taken---" << endl;
		}
		else {

			cout << "\t\t PLease enter ID name of your Truck/Van.: ";
			cin >> idnum;
			motor.setid(idnum);
			idNum2[i2] = motor.getid();
			cararray2[i2][0].setbrand(brandname);
			cout << "Please enter the Cargo Volume" << endl;
			cin >> volume;
			cararray2[i2][1].setvolume(volume);
			cout << "Enter month please" << endl;
			cin >> mnth[i];
			cout << "Enter day please" << endl;
			cin >> date[i];
			cout << "Please enter hours please:" << endl;
			cin >> hr[i];
			cout << "Please enter minutes please:" << endl;
			cin >> mins[i];
			i2++;
			counter2 = counter2 - 1;
			vehicleNumber = 2;
			prcntVans++;
		}
		break;
	case '3':
		if (counter3 == 0)
		{
			cout << "---Sorry, all parking slots are taken---" << endl;
		}
		else {
			cout << "\t\t PLease enter ID name of your Motorbike.: ";
			cin >> idnum;
			torv.setid(idnum);
			idNum3[i3] = torv.getid();
			cararray3[i3][0].setbrand(brandname);
			cout << "Enter the size of an engine please" << endl;
			cin >> sizeofengine;
			cararray3[i3][1].setsoe(sizeofengine);
			cout << "Enter month please" << endl;
			cin >> mnth[i];
			cout << "Enter day please" << endl;
			cin >> date[i];
			cout << "Please enter hours please:" << endl;
			cin >> hr[i];
			cout << "Please enter minutes please:" << endl;
			cin >> mins[i];
			i3++;
			counter3 = counter3 - 1;
			vehicleNumber = 3;
			prcntMotorbike++;
		}
		break;
	}

}
void parking::remove()
{
	
	int remove;
	cout << "Type and id of a car that ou would like to remove" << endl;

	cin >> remove;
	for (int chikibriki = 0; chikibriki <= 20; chikibriki++)
	{
		//idNum[chikibriki];
		//cararray[chikibriki];
		if (idNum[chikibriki] == remove || idNum2[chikibriki] == remove || idNum3[chikibriki] == remove)
		{
			
			e = chikibriki;
			//idNum[chikibriki] = 0;
			//cararray[chikibriki].setid(0);
			if (e == chikibriki)

			{


				cout << "\n\t>> >>> >>>>> Vehicle is being checked out....";

				calculate_fee(e);

				cout << "\n\t\t\tParking Fee Receipt";

				cout << "\n\t\t   Code Delight Parking Service\tDate     " << edate << "/" << emnth << "/2009 E.C.";

				//cout << "\n\tCustomer's Id: " << id_no[e];

				//cout << "\n\tBrand name : " << plate_no[e];

				//cout << "\n\tVehicle type: "; vehicle_name();
				

				cout << "\n\tEntry Date and time: " << date[e] << "/" << mnth[e] << "/2017    time " << hr[e] << ":" << mins[e];

				cout << "\n\tCurrent exit date: " << edate << "/" << emnth << "/2017 ";

				cout << "  time " << ehr << ":" << emins;

				cout << "\n\tTotal hours parked: " << thr << " hrs";




				cout << "\n\tTotal days parked: " << tdays << " days";

				cout << "\n\tRate per hour for your ";

				//	vehicle_name();

				cout << " : " << perhr << " br/hr.";

				cout << " is: " << perdy << " br/day";

				cout << "\n\tTotal Cost= " << tdays << "-2(days)" << "*" << perdy << "(br/day)" << " + " << "48hrs*" << perhr << "br/hr";

				cout << "\n\tTotal Cost= " << thr << "hrs * " << perhr << "br/hr";

				cout << "\n\n\t\tYour Total cost is: " << tfee << " Pounds.\n";

				





				//	cout << "\n\n\n\t>>>>>>>>>>>"; vehicle_name();



				slot_no[e] = 'n';
				if (idNum[e] == remove) {
					cararray[e].setbrand(" ");
					cararrayColor[e][0].setcolor("");
					cararrayColor[e][1].setnod(0);
					idNum[e] = 0;
					counter++;
					prcntCars--;
				}
				if (idNum2[e] == remove) {
					cararray2[e][0].setbrand(" ");
					cararray2[e][1].setvolume(0);
					idNum2[e] = 0;
					counter2++;
					prcntVans--;
				}
				if (idNum3[e] == remove) {
					cararray3[e][0].setbrand(" ");
					cararray3[e][1].setsoe(0);
					idNum3[e] = 0;
					counter3++;
					prcntMotorbike--;
				}
				
				cout << "Parking slot No." << e + 1 << " is cleared. Free to park.--------------";

				cue_full = 'n';

				e = -1;
				
				break;
			}

		}
		//else { cout << "Sorry, such id was not found" << endl; }


	}

	
	
}
/*void parking::findByDate() 
{
	float day[20], month[20];
	cout << "Type a day please;" << endl;
	cin >> day[2];
	cout << "Type a month please;" << endl;
	cin >> month[];
	
	for (int findate = 0; findate = 20; findate++)
	{
		//idNum[chikibriki];
		//cararray[chikibriki];
		
		if (mnth[findate] == month && date[findate] == day)
		{
			if (mnth[findate] == month && date[findate] ==day) {
				cout << "These are the info about a vehicle" << endl;
				cout << cararray[findate].getrand() << endl;
				cout << cararrayColor[findate][0].getcolor() << endl;
				cout << cararrayColor[findate][1].getnof() << endl;
			//	idNum[e] = 0;
				//counter++;
				//prcntCars--;
			}
		
		}
	}
}
	*/
	




void parking::display() 
{
	cout << endl;
	cout << "Cars \t                                   Brand Name     Color   Number of Doors" << endl;
	cout << endl;
	cout << counter << " free parking slots are left " << endl;
	for(int chiki = 0; chiki <5; chiki++)
    {
	cout << "\tCars-------Plate No "<< idNum[chiki] << "                "
		<<  cararray[chiki].getrand() <<"     "<< cararrayColor[chiki][0].getcolor() << "   "<< cararrayColor[chiki][1].getnof() << endl;
    }
	cout << endl;
	cout <<"Truck/Van \t                                             Cargo volume" <<  endl;
	cout << endl;
	cout << counter2 << " free parking slots are left " << endl;
	for (int chiki = 0; chiki < 5; chiki++)
	{
		cout << "\tTruck/Vans-------Plate No " << idNum2[chiki] << "                "
			<< cararray2[chiki][0].getrand() << "     " <<cararray2[chiki][1].getvolume()<<  endl;
	}
	cout << endl;
	cout <<"Motorbike \t                                            Size of Engine" << endl;
	cout << endl;
	cout << counter3 << " free parking slots are left " << endl;
	for (int chiki = 0; chiki <10; chiki++)
	{
		cout << "\tMotorbikes-------Plate No " << idNum3[chiki] << "                "
			<< cararray3[chiki][0].getrand() << "     " << cararray3[chiki][1].getrnengine() << endl;
	}

	calculatePercentage();
	
}


float parking::calculate_fee(int e) ///Calculates total parking fee and returns it as float.

{


	float const trh = 2, trd = 15; // trh =train/bus rate per hour and train/bus rate per day

	float const crh = 1, crd = 10; //c-car's rate

	float const mrh = 0.5, mrd = 4; //m- motorcycle's rate



	switch (choose)

	{

	case '1':

		perhr = crh;

		perdy = crd;

		break;

	case '2':

		perhr = trh;

		perdy = trd;

		break;

	case '3':

		perhr = mrh;

		perdy = mrd;

	}

again:



	cout << "\n\tEnter exit month please ";
	cin >> emnth;
	cout << "\n\tEnter exit date please ";
	cin >> edate;



	tmnth = emnth - mnth[e];

	days = edate - date[e];

	tdays = (tmnth * 30) + days;

	if (tdays<0)

	{
		cout << "\t<<<<<<Incorrect entry, please enter again >>>>>>>\n";

		goto again;
	}

	else if (tdays>3 )

	{
	optionforday3:

		//cue = 'n';

		tfee = (tdays - 2) *perdy + (perhr * 48);
	}

	else

	{

		//cue = 'y';

		cout << "\n\tEnter exit hours please ";

		cin >> ehr;
		cout << "\n\tEnter exit minutes please ";
		cin >> emins;
		thr = ehr - hr[e];

		if (thr<0 && tdays>0)

		{
			tdays--;

			thr += 24;
		}

		tmins = emins - mins[e];

		if (tmins<0 && thr>0)

		{

			thr--;

			tmins += 60;

		}

		thr = (thr + tmins / 60) + (tdays * 24);

		if (thr>48)

			goto optionforday3;

		else if (thr <= 0)

		{
			cout << "\t<<<<<< Incorrect enter, please enter again >>>>>>>\n";

			goto again;
		}

		tfee = thr*perhr;

	}

	return tfee;

}
void parking::calculatePercentage()
{
	int result;
	result = (100 * prcntCars) / overall;
	int result2;
	result2 = (100 * prcntVans) / overall;
	int result3;
	result3 = (100 * prcntMotorbike) / overall;

	cout << endl;
	cout << "----------This is the percentage of each vehicle----------" << endl;
	cout << "Cars----------1. " << result << endl;
	cout << "Trucks/Vans----------2. " << result2 << endl;
	cout << "Motorbikes----------3. " << result3 << endl;

}


