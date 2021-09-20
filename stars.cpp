/*enum:  supergiant=0, main sequence=1, dwarf=2, giant=3,subgiant=4,binary star system=5,multistar=6, open star cluster=7 */
#include <iostream>
using namespace std;
#include <string>
#include <conio.h>
enum type { supergiant, mainSequence, dwarf, giant, subgiant, binary, multiStar, cluster };
struct starInfo {
    double Sd, Sluminosity, SAge;//distance, star luminosity, star age
    string Aka[4];//also known as
    string type[4];//kind of star; 3 possibilities if star is trinary system thus trinary in [1] then 2,3,4 have specification.
    string color;
    bool supernova = false;//will star go supernova?
    string uniqueness[3];//specific thing about star
};
struct star {
    starInfo Specs;
    string starname[9] = { "Polaris", "Sirius", "Alpha centauri system", "Betelgeuse", "Rigel", "Vega", "Pleiades", "Antares", "Canopus" };
};
star Star[9];
string back;
void declarations() {
    //star distance in light years declaration
    Star[0].Specs.Sd = 430;
    Star[1].Specs.Sd = 6.8;
    Star[2].Specs.Sd = 4;//Alpha centauri system closest
    Star[3].Specs.Sd = 650;
    Star[4].Specs.Sd = 800;
    Star[5].Specs.Sd = 25;
    Star[6].Specs.Sd = 444;
    Star[7].Specs.Sd = 550;
    Star[8].Specs.Sd = 300;
    //star age declaration in millions
    Star[0].Specs.SAge = 20;
    Star[1].Specs.SAge = 230;
    Star[2].Specs.SAge = 5.5;//youngest
    Star[3].Specs.SAge = 10.01;
    Star[4].Specs.SAge = 8.01;
    Star[5].Specs.SAge = 450;//vega is oldest
    Star[6].Specs.SAge = 100;
    Star[7].Specs.SAge = 12;
    Star[8].Specs.SAge = 10;
    //luminosity (x times the sun's brightness)
    Star[0].Specs.Sluminosity = 25000;//average brightness
    Star[1].Specs.Sluminosity = 25.4;
    Star[2].Specs.Sluminosity = 0.5;//alpha centauri system darkest
    Star[3].Specs.Sluminosity = 100000;//betelgeuse brightest
    Star[4].Specs.Sluminosity = 66000;
    Star[5].Specs.Sluminosity = 50;
    Star[6].Specs.Sluminosity = 5;
    Star[7].Specs.Sluminosity = 65000;
    Star[8].Specs.Sluminosity = 10700;
    //supernova stars?
    Star[3].Specs.supernova = true;
    Star[4].Specs.supernova = true;
    //type of star- use of enums; if value is 0-4 then its a specific type; but if its 5-7 then atleast a system
    Star[1].Specs.type[0, 3] = binary;//5  Sirius         //greater than 5 then break
    Star[1].Specs.type[1] = mainSequence;//1
    Star[1].Specs.type[2] = dwarf;//2
    Star[7].Specs.type[0] = supergiant;//antares
    Star[8].Specs.type[0, 1, 2, 3] = giant;
    //color of star- use of enums
    for (int i = 0; i < 9; i++)
    {
        Star[i].Specs.color = "red";//assuming red for all
    }
    //stars alternative names
    //specification of star

}
double average_of_stars_age() {
    double average_star_ages = 0;
    for (int i = 0; i < 9; i++)
    {
        average_star_ages += Star[i].Specs.SAge;
    }
    average_star_ages = average_star_ages / 9;
    return average_star_ages;
}
double avgBrightness() {
    double avg;
    for (int i = 0; i < 9; i++)
    {
        avg += Star[i].Specs.Sluminosity;
    }
    avg = avg / 9;
    return avg;
}
double avgDistance() {
    double avg;
    for (int i = 0; i < 9; i++)
    {
        avg += Star[i].Specs.Sd;
    }
    avg = avg / 9;
    return avg;
}
void STARS();
void generalStars() {//An essay written by us
    cout << " Here, you can learn about stars. Please take a quiz to test your understanding at the end!" << endl;
    cout << endl << "The Diamonds in the Sky" << endl << endl << "\tStars hold a significant role in history, it has had a very lengthy past that goes back about 5,500 years. Stars to their core are celestial bodies that are made from hydrogen and helium and they produce light and heat. A lot of nuclear forges inside their cores. However, people thousands of years ago would believe in Star lore, where mythical stories about stars and star patterns are created. for example, Orion and Scorpius, more famous in Greek stories of Orion the Hunter and Scorpius the scorpion was made. Star gazing became popular from then trying to find some patterns that may or may not exist. The Greeks went as far as creating stories about Orion and Scorpius saying both constellations were never seen at the same time because they were squabbling amongst one another and so they would never face each other, and several other entertaining stories for more constellations." << endl;//Para1
    cout << endl << "\tHowever, they are relatively more important scientifically than in stories as they are the basis of galaxies and that is the reason why there are billions of them in the universe. Astronomers predict that 300 billion stars exist in the Milky Way which would mean there are far more in the universe as a whole." << endl;//Para2
    cout << endl << "\tMost of the stars in our Galaxy are main sequence stars, including our sun, they convert hydrogen to helium and radiate X Rays, this obviously produces a lot of energy which is why the star is hot, radiates UVB (ultra violet radiation) and is shining brightly, we are not as affected by it as we would be without the ozone layer." << endl;//Para3
    cout << endl << "\tWarmer stars appear white or blue where colder ones seem orange or red. Other kinds of stars include white dwarf stars, dwarfs Giants and super-giants. Some stars appear brighter than others, this is known as luminosity, and at times stars seem dim in the night Sky due to their distance. The stars we see in the night Sky are light years away from earth, except for our sun." << endl;//para4
    cout << endl << "\tStars last for billions of years and the general rule is that the more massive a star is, the shortest lifespan it receives. Our sun is considered 4.6 billion years old and an average sized yellow dwarf star, it is in the main sequence stage and expected to remain so for the next several billion years." << endl;//para5
    cout << endl << "\tMajority of stars lives are spent in the main sequence phase, just like our sun, however when they start to move to the end of their lives it's noticeable by how much hydrogen has been changed into helium and are considered as red Giants because of how the stars temperature is raised as the helium sinks to the stars core. " << endl;//para6
    cout << endl << "\tRed Giants shed their outer layers, somewhat like how a snake sheds its skin, and become smaller which causes them to transform into a white dwarf. these white dwarfs get colder and colder for billions of years. Nevertheless, if they are part of a binary star system, they can trigger a bright Nova. Possibly the last stage, black dwarfs, which are white dwarfs that cease to produce energy. " << endl;//para7
    cout << endl << "\tThese are just a few of the most important stars in our universe, of course outer space has so much more to offer, and we have so much more content! So do subscribe for more :)" << endl;//para14
    cout << endl;
    cout << "\tDo you wish to go back to the stars menu? (enter yes or no)" << endl;
    cin >> back;
    if (back == "yes" || back == "Yes")
    {
        cout << "______________________________________________";
        STARS();
    }
    else
    {
        cout << endl << "Thank you for your time, goodbye.";
    }

}
void StarIntel() {//INFORMATION ABOUT STARS- written by us.
    cout << "Welcome to the star intel section!" << endl;
    cout << endl << "\tSirius, (not Sirius Black), is the brightest star and brightest in the night Sky it is the one you might most often see at nighttime, also known as the dog star, (again, not Sirius black) is Greek for 'glowing' or 'scorcher'. The dog star is in a binary star system which consists of one white main sequence star, Sirius A, faint white dwarf, known as Sirius B (seriously JK Rowling?). It is 6.8 light years away from earth which is relatively closer than most. Scientists predict that the star is getting closer before it starts to go away again. This star was a signal for the Egyptians flooding of Nile; for the Greeks, it was a sign of dog days of summer; and for the Polynesian�s, a sign of the approach of winter and was often used to traverse around the Pacific Ocean." << endl;//para8
    cout << endl << "\tBetelgeuse, pronounced Beetle-juice, is a bright red supergiant roughly 650 light years from earth also known as Alpha Orionis. it is the largest and has the highest luminosity in the night Sky and of course in the Orion constellation. It comes from the word 'Ibt al-Jauza', Arabic for hand of Orion. Perhaps the most exciting thing about the supergiant is that it is expected to go supernova (powerful stellar explosion) someday in the future." << endl;//para9
    cout << endl << "\tAntares, aka Alpha Scorpii, is a red supergiant. Its name is Greek for �rival to Mars� because of its reddish appearance (Elon musk; chuckles in danger) for Ares the Greek god of war in Greek myth. It is the 17th brightest and largest star and in the constellation Scorpius. Persians called it the �Royal stars of Persia� and believed the 4 stars guarded the 4 districts of heaven. Antares is near the imaginary band where moon, planets and sun move. The red supergiant is 12 million years old and at a distance of 550 light years away. " << endl;//para10
    //MORE STAR PARAGHRAPS
    //cout<<endl<<"\tAlpha Centauri system, also known as Rigel Kent or Toliman, is a multi-star system, just like Polaris and Sirius. It consists of Alpha Centauri A, Alpha Centauri B, and Proxima Centauri (Centauri C). The Alpha Centauri system is 4 light years away from earth and the closest star system to earth. Alpha Centauri A is a main sequence white dwarf star that has 110% of the mass of the sun and 151% of the luminosity of our sun. Alpha Centauri B is an orange subgiant for the 90.7% of our sun's mass and has luminosity of 44.5%. Proxima Centauri is a red dwarf star and is the closest of the three stars to our solar system. A planet of the same size as earth was found around Alpha Centauri B, known as Bb, regrettable for the alien conspiracy theorists, it is unlikely to sustain life due to the heat from Centauri B. It was first mentioned by an English Explorer in 1592 in the �Tractatus De Globis� and later B and C were discovered by Jesuit priest, Jean Richaud and Robert Innes."<<endl;//para11
    //cout<<endl<<"\tRigel, also known as Beta Orionis, looks as if it were a blue supergiant, but is a multi-star system. It is the brightest in the constellation Orion and approximately 800 light years away. Beta Orionis consists of Rigel A, a blue-ish white supergiant, and Rigel B, a binary system consisting of double main sequence subdwarf stars of which one is Rigel C. This 10 million old star, this is actually considered young for stars, is expected to go supernova just like Betelgeuse."<<endl;//para12
    //cout<<endl<<"\tCanopus, also known as Alpha Carinae, and Sohayl/Soheil in ancient times, is a white giant. It is the brightest in the southern constellation of Carina, second brightest in the skies. it served as a navigator for King Menelaus of Sparta in the Iliad and was named after legendary Canopus. For the Chinese, it was known as �star of the old man�. In recent times however, it is used to adjust space shuttle�s in outer space."<<endl;//para13
    //END PARAGRAPHS
    cout << endl << "\tThese are just a few of the most important stars in our universe, of course outer space has so much more to offer, and we have so much more content! So do subscribe for more :)" << endl;//para14
    cout << endl;
    cout << "\tDo you wish to go back to the stars menu? (enter yes or no)" << endl;
    cin >> back;
    if (back == "yes" || back == "Yes")
    {
        cout << "______________________________________";
        STARS();
    }
    else
    {
        cout << endl << "Thank you for your time, goodbye.";
    }
}
void akinator() {//star-akinator
    char age, bright;
    double averageAge, averageLuminosity, avgD;
    string supernova, Bool;
    string guess;
    cout << "Welcome to the star-akinator, here, you will think of a star and we will be able to tell you exactly which one it is by asking you a set of questions.";
invalid_letter:
    cout << endl << "How old is this star? enter a letter from the following" << endl << "\ta. The oldest star" << endl << "\tb. The youngest star" << endl << "\tc. The average aged stage" << endl << "\td. none of the above" << endl;
    cin >> age;
    if (age == 'a')
    {
        cout << endl << Star[5].starname[5] << "\t is the oldest star, being " << Star[5].Specs.SAge << " light years old.";
    }
    else if (age == 'b')
    {
        cout << endl << Star[2].starname[2] << "\t is the youngest star, being " << Star[2].Specs.SAge << " light years old.";
    }
    else if (age == 'c')
    {
        averageAge = average_of_stars_age();
        cout << endl << Star[6].starname[6] << "\t is the average aged star, being " << Star[6].Specs.SAge << " light years old. ";
        cout << endl << " Though the average of ages of the 9 stars in our algorithm is " << averageAge;//93.95
    }
    else if (age == 'd')
    {
        cout << endl << "Will the star you are thinking of, go supernova? enter yes or no. (supernova is when the death of a star is by a stellar explosion) " << endl;
        cin >> supernova;
        if (supernova == "yes")
        {
            cout << endl << " Is this star's name derived from arabic word Ibt-al-Jauza? yes or no " << endl;
            cin >> Bool;
            if (Bool == "yes")
            {
                cout << " The star you are thinking of is: " << Star[3].starname[3];
            }
            else
            {
                cout << " The star you are thinking of is: " << Star[4].starname[4];
            }
        }
        else if (supernova == "no")
        {
            cout << " How bright is the star? enter a letter" << endl << "\ta. Average brightness" << endl << "\tb. other" << endl;
            cin >> bright;
            if (bright == 'a')
            {
                averageLuminosity = avgBrightness();
                cout << " The star you are thinking of is " << Star[0].starname[0] << " with luminosity= " << Star[0].Specs.Sluminosity << endl;
                cout << " Though exact average brightness is " << averageLuminosity << endl;
            }
            else
            {
                cout << "Is the star you are thinking of getting closer to our solar system? yes or no " << endl;
                cin >> Bool;
                if (Bool == "yes")
                {
                    cout << "The star you are thinking of is " << Star[1].starname[1] << ", this is the closest star also known as the dog star. ";
                }
                else
                {
                    cout << "Is the star you are thinking of at an average distance compared to the other 9? yes or no. " << endl;
                    cin >> Bool;
                    if (Bool == "yes")
                    {
                        avgD = avgDistance();
                        cout << "The star you are thinking of is " << Star[8].starname[8] << " with a distance of " << Star[8].Specs.Sd << " light years.";
                        cout << endl << " though the exact average distance is " << avgD;
                    }
                    else
                    {
                        cout << endl << " The star you are thinking of is " << Star[7].starname[7] << " a red supergiant.";
                    }
                }
            }
        }
    }
    else
    {
        cout << endl << "Invalid letter entered, please try again." << endl;
        goto invalid_letter;//repeat input from user
    }
    cout << endl << "__________________________________________________";
    STARS();
}
int popQuiz() {//Star quiz
    int percent, marks = 0, wrongAns[10] = { 0 };
    char ans;
    string anss, anss1;
    float Ans;
    cout << "Welcome to the pop quiz! answer the following questions" << endl;
    cout << "Q1- Which star is the brightest? enter the corresponding letter." << endl;
    cout << "\ta. " << Star[3].starname[3] << endl << "\tb. " << Star[5].starname[5] << endl << "\tc. " << Star[0].starname[0] << endl;//a is ans
    cin >> ans;
    if (ans == 'a')
    {
        marks += 1;
        wrongAns[0] = 0;
    }
    else
    {
        wrongAns[0] = 1;
    }

    cout << endl << "Q2- Will the star " << Star[1].starname[1] << " go supernova? yes or no" << endl;//no
    cin >> anss;
    if (anss == "no" || anss == "No" || anss == "NO")
    {
        marks += 1;
    }
    else
    {
        wrongAns[1] = 2;
    }
    cout << endl << "Q3- What type of star is " << Star[8].starname[8] << "?";
    cout << endl << "\ta. dwarf" << endl << "\tb. main sequence" << endl << "\tc. giant" << endl;//c
    cin >> ans;
    if (ans == 'c')
    {
        marks += 1;
    }
    else
    {
        wrongAns[2] = 3;
    }
    cout << endl << "Q4- Fill the blank. " << Star[7].starname[7] << " is _ light years away." << endl;
    cin >> Ans;
    if (Ans == Star[7].Specs.Sd)
    {
        marks += 1;
    }
    else
    {
        wrongAns[3] = 4;
    }
    cout << endl << "Q5- " << Star[4].starname[4] << " is also known as __ " << endl;
    cin.ignore();
    getline(cin, anss);
    if (anss == "Beta Orionis" || anss == "beta orionis" || anss == "Beta orionis")
    {
        marks += 1;
    }
    else
    {
        wrongAns[4] = 5;
    }
    cout << endl << "Q6- " << Star[1].starname[1] << " is also known as  __" << endl;
    //    cin.ignore();
    getline(cin, anss);
    if (anss == "Dog star" || anss == "dog star" || anss == "glowing" || anss == "scorcher" || anss == "Glowing" || anss == "Scorcher")
    {
        marks += 1;
    }
    else
    {
        wrongAns[5] = 6;
    }
    cout << endl << "Q7- " << Star[0].starname[0] << " is the alpha star in the constellation __" << endl;
    //    cin.ignore();
    getline(cin, anss);
    if (anss == "Ursa Minor" || anss == "ursa minor" || anss == "Ursa minor" || anss == "the little bear" || anss == "The little bear")
    {
        marks += 1;
    }
    else
    {
        wrongAns[6] = 7;
    }
    cout << endl << "Q8- The more massive the star, the __ its life span." << endl;
    cin >> anss;
    if (anss == "shorter" || anss == "Shorter")
    {
        marks += 1;
    }
    else
    {
        wrongAns[7] = 8;
    }
    cout << endl << "Q9- Red giant phase starts to shed its _ and becomes a _ " << endl;
    cin.ignore();
    getline(cin, anss);
    //    cin.ignore();
    getline(cin, anss1);
    if (anss == "outer layers" && anss1 == "white dwarf")
    {
        marks += 1;
    }
    else
    {
        wrongAns[8] = 9;
    }
    cout << endl << "Q10- White dwarfs _ for billions of years and then eventually become __" << endl;
    //   cin.ignore();
    getline(cin, anss);
    //    cin.ignore();
    getline(cin, anss1);
    if (anss == "cool" && anss1 == "black dwarfs")
    {
        marks += 1;
    }
    else
    {
        wrongAns[9] = 10;
    }
    percent = marks * 10;
    if (percent >= 60)
    {
        cout << "congratulations!! you recieved " << percent << "%. ";
    }
    else
    {
        cout << "Sorry, you failed. you got " << percent << "%. ";
    }
    if (marks != 10)//questions user lost marks in if they didnt recieve 100%
    {
        cout << "Questions you lost marks in are as follows: ";
        for (int i = 0; i < 10; i++)
        {
            if (wrongAns[i] != 0)
            {
                if (i != 9)
                {
                    cout << wrongAns[i] << ", ";
                }
                else
                {
                    cout << wrongAns[i] << ".";
                }
            }
        }
    }
    cout << endl;
    return percent;

}
void blackHoles() {
    char BlackQ;
    cout << endl << "Welcome to the black holes sub section. A black hole is a region of spacetime where gravity is so strong that nothing -no particles or even electromagnetic radiation such as light- can escape from it. The theory of general relativity predicts that a sufficiently compact mass can deform spacetime to form a black hole." << endl;
    cout << "choose a letter for the question you'd like to ask in regard of black holes." << endl << "\ta. What are black holes made of?" << endl << "\tb. Can you survive a black hole?" << endl << "\tc. How many black holes are there?" << endl << "\td. Where are black holes?" << endl << "\te. Will a black hole hit Earth?" << endl << "\tf. What are the 4 types of black holes?" << endl << "\tg. Does time exist in a black hole?" << endl << "\th. Will the Sun become a black hole?" << endl << "\ti. EXIT" << endl;
thisstatement:
    cin >> BlackQ;
    switch (BlackQ)
    {
    case 'a':
        cout << endl << "Stellar black holes are made when the center of a very big star falls in upon itself, or collapses. When this happens, it causes a supernova. A supernova is an exploding star that blasts part of the star into space. Scientists think supermassive black holes were made at the same time as the galaxy they are in.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'b':
        cout << endl << "Regardless of the explanation, we do know that it is highly unlikely that anyone entering a black hole would survive. Nothing escapes a black hole. Any trip into a black hole would be one way. The gravity is too strong and you could not go back in space and time to return home.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'c':
        cout << endl << "Judging from the number of stars large enough to produce such black holes, however, scientists estimate that there are as many as ten million to a billion such black holes in the Milky Way alone.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'd':
        cout << endl << "The supermassive black hole is located at the heart of a galaxy called M87, located about 55 million light-years away, and weighs more than 6 billion solar masses. Its event horizon extends so far it could encompass much of our solar system out to well beyond the planets.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'e':
        cout << endl << "There are no black holes close enough to Earth to affect us. ... This black hole is 6.6 times more massive than our Sun. (That means it has a lot of mass, which means it has a really strong gravitational pull � much stronger than even our Sun's gravitational pull.)";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'f':
        cout << endl << "There are four types of black holes: stellar, intermediate, supermassive, and miniature. The most commonly known way a black hole forms is by stellar death.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'g':
        cout << endl << "Near a black hole, the slowing of time is extreme. From the viewpoint of an observer outside the black hole, time stops. For example, an object falling into the hole would appear frozen in time at the edge of the hole. Inside a black hole is where the real mystery lies.";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'h':
        cout << endl << "Will the Sun become a black hole? No, it's too small for that! The Sun would need to be about 20 times more massive to end its life as a black hole. ... In about 5 billion years, the Sun will start to run out of hydrogen in its core to fuse, and it will begin to";
        cout << endl << "Would you like to go back? yes or no." << endl;
        cin >> back;
        if (back == "yes")
        {
            blackHoles();
        }
        break;
    case 'i':
        cout << "___________________________________________";
        STARS();
        break;
    default:
        cout << "Invalid choice, please try again.";
        goto thisstatement;
        break;
    }
}
void galaxies() {

}
void STARS() {
    int choice, certQuantity, markspercent, amount;
    string certificate;
    cout << endl << "Welcome to the star exploration section! Please enter the number for the corresponding output you are looking for. " << endl << "NOTE: PLEASE USE THIS APPLICATION IN FULL SCREEN" << endl;
thisStatement:
    cout << "\t- '1' : For general information on stars." << endl << "\t- '2' : If you are looking for intel on the most famous stars." << endl << "\t- '3' : If you want us to guess which star you are looking for." << endl << "\t- '4' : For a pop quiz!" << endl << "\t- '5' : to go to the Black holes section" << endl << "\t- '6' : to go to the galaxies section. " << endl << "\t- '6' : EXIT" << endl;
    cin >> choice;
    declarations();
    switch (choice)
    {
    case 1:
        generalStars();
        break;
    case 2:
        StarIntel();
        break;
    case 3:
        akinator();
        break;
    case 4:
    {
    retake:
        markspercent = popQuiz();
        if (markspercent >= 60) {
            cout << endl << "You can issue a certificate to prove you have done a course on stars, would you like to purchase a Certificate for Rs.3,200? yes or no" << endl;
            cin >> certificate;
            if (certificate == "yes" || certificate == "Yes" || certificate == "YES")
            {
            invalidQuantity:
                cout << endl << "How many certificates would you like?" << endl;
                cin >> certQuantity;
                if (certQuantity <= 0)
                {
                    cout << endl << "Invalid Quantity, please try again." << endl;
                    goto invalidQuantity;
                }
                amount = 3200 * certQuantity;
                cout << endl << "_____________" << endl << "\tTotal amount is Rs." << amount;
                STARS();
            }
        }
        else
        {
            cout << "Would you like to retake the quiz? yes or no" << endl;
            string retake;
            cin >> retake;
            if (retake == "yes" || retake == "Yes" || retake == "YES")
            {
                goto retake;
            }
            cout << endl << "Thank you for completing the Stars section. Goodbye.";
            cout << endl << "_____________________________________________";
            STARS();
        }
    }
    break;
    case 5://black holes
        blackHoles();
        break;
    case 6://galaxies
        galaxies();
        break;
    case 7://back to main
        cout << "_____________________________________";
        break;
    default:
        cout << "Invalid choice, please try again.";
        goto thisStatement;
        break;
    }
}

int main() {
    STARS();
}
