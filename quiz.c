#include <stdio.h>
#include <stdlib.h>

int Choleric(int, int, int, int, int, int);
int Phelegmatic(int, int, int, int, int, int);
int Melancholic(int, int, int, int, int, int);
int Sanguine(int, int, int, int, int, int);
int check(float);

int main()
{
    system("clear");
    printf("\t\t\t\t Welcome to our IT102 Project"
           "\n\t\t In this program, I am going to ask some questions from you"
           "\n\t\t and for each question you have to input respective integers"
           "\n\t\t Based on the answers I'll analyze your personality by giving"
           "\n\t\t you score in some categories."
           "\n\t\t So, Fasten your seat belts and get ready for this interesting\n\t\t personality test !\n.");
    printf("%s", "\n\t\t Please note the following before answering the questions"
                 "\n\t\t YOU NEED TO ANSWER INTEGERS ONLY FROM 1 TO 5"
                 "\n\t\t Strongly disagree --> 1"
                 "\n\t\t Disagree --> 2"
                 "\n\t\t Neutral --> 3"
                 "\n\t\t Agree --> 4"
                 "\n\t\t Strongly Agree --> 5\n\n");

    float QC1, QC2, QC3, QC4, QC5, QC6;
    float QM1, QM2, QM3, QM4, QM5, QM6;
    float QS1, QS2, QS3, QS4, QS5, QS6;
    float QP1, QP2, QP3, QP4, QP5, QP6;

    printf("\t\t*Lets Begin*\n");
    printf("\t\t*Here Comes Problem Set 1*\n\n\n");
    printf("\n\t1. I get angry easily(PLEASE SELECT 1 TO 5 integers ONLY).\n");

C1:
    printf("\t");
    scanf("\t%f", &QC1);
    if (check(QC1))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C1;
    }
    printf("\n\t2. I have a strong need for power (PLEASE SELECT 1 TO 5 integers ONLY).\n");

C2:
    printf("\t");
    scanf("\t%f", &QC2);
    if (check(QC2))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C2;
    }
    printf("\n\t3. I try to outdo others (PLEASE SELECT 1 TO 5 integers ONLY).\n");

C3:
    printf("\t");
    scanf("\t%f", &QC3);
    if (check(QC3))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C3;
    }
    printf("\n\t4. I boss people around (PLEASE SELECT 1 TO 5 integers ONLY).\n");

C4:
    printf("\t");
    scanf("\t%f", &QC4);
    if (check(QC4))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C4;
    }
    printf("\n\t5. I like it when people are scared of me (PLEASE SELECT 1 TO 5 integers O NLY).\n");

C5:
    printf("\t");
    scanf("\t%f", &QC5);
    if (check(QC5))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C5;
    }
    printf("\n\t6. I try to please everyone (PLEASE SELECT 1 TO 5 integers ONLY).\n");

C6:
    printf("\t");
    scanf("\t%f", &QC6);
    if (check(QC6))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto C6;
    }

    printf("\n\n");
    float grade1 = Choleric(QC1, QC2, QC3, QC4, QC5, QC6);
    printf("\t\t~~~Your Grade in Set 1 is = %0.3f out of 30.000~~~\n\n\n\n", grade1);

    printf("\t\t**It's Time for Problem Set 2 **\n\n");
    printf("\n\t1. It takes a lot of abuse to get me angry(PLEASE SELECT 1 TO 5 integers ONLY).\n");

P1:
    printf("\t");
    scanf("\t%f", &QP1);
    if (check(QP1))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P1;
    }
    printf("\n\t2. I am relaxed most of the time (PLEASE SELECT 1 TO 5 integers ONLY).\n");

P2:
    printf("\t");
    scanf("\t%f", &QP2);
    if (check(QP2))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P2;
    }
    printf("\n\t3. I seldom get mad (PLEASE SELECT 1 TO 5 integers ONLY).\n");

P3:
    printf("\t");
    scanf("\t%f", &QP3);
    if (check(QP3))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P3;
    }
    printf("\n\t4. The good life is a peaceful life (PLEASE SELECT 1 TO 5 integers ONLY).\n");

P4:
    printf("\t");
    scanf("\t%f", &QP4);
    if (check(QP4))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P4;
    }
    printf("\n\t5. I have had a dramatic falling out with a friend (PLEASE SELECT 1 TO 5 i ntegers ONLY).\n");

P5:
    printf("\t");
    scanf("\t%f", &QP5);
    if (check(QP5))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P5;
    }
    printf("\n\t6. I experience my emotions intensely (PLEASE SELECT 1 TO 5 integers ONLY) .\n");

P6:
    printf("\t");
    scanf("\t%f", &QP6);
    if (check(QP6))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto P6;
    }

    printf("\n\n");
    float grade2 = Phelegmatic(QP1, QP2, QP3, QP4, QP5, QP6);
    printf("\t\t~~~Your Grade in Set 2 is = %0.3f out of 30.000~~~\n\n\n\n", grade2);

    printf("\t\t *Lets go for Problem set 3 ***\n\n");
    printf("\n\t1. I tend to feel very hopeless(PLEASE SELECT 1 TO 5 integers ONLY).\n");

M1:
    printf("\t");
    scanf("\t%f", &QM1);
    if (check(QM1))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M1;
    }
    printf("\n\t2. I feel my anxiety overwhelms me (PLEASE SELECT 1 TO 5 integers ONLY).\n ");

M2:
    printf("\t");
    scanf("\t%f", &QM2);
    if (check(QM2))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M2;
    }
    printf("\n\t3. I feel attacked by others (PLEASE SELECT 1 TO 5 integers ONLY).\n");

M3:
    printf("\t");
    scanf("\t%f", &QM3);
    if (check(QM3))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M3;
    }
    printf("\n\t4. I feel comfortable with myself (PLEASE SELECT 1 TO 5 integers only ONLY ).\n");

M4:
    printf("\t");
    scanf("\t%f", &QM4);
    if (check(QM4))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M4;
    }
    printf("\n\t5. I seldom feel blue (PLEASE SELECT 1 TO 5 integers ONLY).\n");

M5:
    printf("\t");
    scanf("\t%f", &QM5);
    if (check(QM5))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M5;
    }
    printf("\n\t6. I don't care much when people insult me (PLEASE SELECT 1 TO 5 integers ONLY).\n");

M6:
    printf("\t");
    scanf("\t%f", &QM6);
    if (check(QM6))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto M6;
    }

    printf("\n\n");
    float grade3 = Melancholic(QM1, QM2, QM3, QM4, QM5, QM6);
    printf("\t\t~~~Your grade in Set 3 is = %0.3f out of 30.000~~~\n\n\n\n", grade3);

    printf("\t\t **Lets Finsih the final set**\n\n");
    printf("\n\t1. I radiate joy.(PLEASE SELECT 1 TO 5 integers ONLY).\n");

S1:
    printf("\t");
    scanf("\t%f", &QS1);
    if (check(QS1))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S1;
    }
    printf("\n\t2. I am the life of the party.(PLEASE SELECT 1 TO 5 integers ONLY).\n");

S2:
    printf("\t");
    scanf("\t%f", &QS2);
    if (check(QS2))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S2;
    }
    printf("\n\t3. I make friends easily.(PLEASE SELECT 1 TO 5 integers ONLY).\n");

S3:
    printf("\t");
    scanf("\t%f", &QS3);
    if (check(QS3))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S3;
    }
    printf("\n\t4. I prefer variety to routine.(PLEASE SELECT 1 TO 5 integers ONLY).\n");

S4:
    printf("\t");
    scanf("\t%f", &QS4);
    if (check(QS4))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S4;
    }
    printf("\n\t5. I make people feel welcome.(PLEASE SELECT 1 TO 5 integers ONLY).\n");

S5:
    printf("\t");
    scanf("\t%f", &QS5);
    if (check(QS5))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S5;
    }
    printf("\n\t6. I dance when I am alone.(PLEASE SELECT 1 TO 5 integers ONLY)\n");

S6:
    printf("\t");
    scanf("\t%f", &QS6);
    if (check(QS6))
    {
        printf("\tInvalid Input,Enter Again:\n");
        {
            printf("\a\a\a\a\a\a");
        }
        goto S6;
    }

    float grade4 = Sanguine(QS1, QS2, QS3, QS4, QS5, QS6);
    printf("\t\t~~~Your grade in Set 4 is = %0.3f out of 30.000~~~\n\n\n\n", grade4);

    printf("\t\t********************************************\n");

    if (grade1 > grade2 && grade1 > grade3 && grade1 > grade4)
        printf("\t\tYour temperament is choleric. The choleric temperament is fundamentally ambitious & leader like.\n\t\tThey have a lot of aggression, energy, and/or passion, and try to instill it in others.\n\t\tThey can dominate people of other temperaments, especially phlegmatic types.\n\t\tMany great charismatic military and political figures were choleric.\n\t\tThey like to be in charge of everything.\n\t\tHowever, cholerics also tend to be either highly disorganized or highly organized.\n\t\tThey do not have in between setups, only one extreme to another. \n\t\tAs well as being leader like and assertive,\n\t\tcholerics also fall into deep and sudden depression. \n\t\tEssentially,they are very much prone to mood swings.");

    else if (grade2 > grade1 && grade2 > grade3 && grade2 > grade4)
        printf("\t\tYour temperament is phlegmatic. The phlegmatic temperament is fundamentally relaxed and quiet,\n\t\tranging from warmly attentive to lazily sluggish. Phlegmatics tend to be content with themselves and are kind.\n\t\tThey are accepting and affectionate. They may be receptive and shy and often prefer stability to uncertainty and change.\n\t\tThey are consistent, relaxed, calm, rational, curious, and observant, qualities that make them good administrators. \n\t\tThey can also be passive-aggressive.");

    else if (grade3 > grade1 && grade3 > grade2 && grade3 > grade4)
        printf("\t\tYour temperament is melancholic. The melancholic temperament is fundamentally introverted and thoughtful.\n\t\tMelancholic people often were perceved as very (or overly) pondering and considerate,\n\t\t getting rather worried when they could not be on time for events.\n\t\tMelancholis can be highly creative in activities such as poetry and art\n\t\tMelancholics can be and can become preoccupied with the tragedy and cruelty in the world. \n\t\t Often they are perfectionists. They are selfreliant and independent. One negative part of being a \n\t\t melancholic is that they can get so involved in what they are doing they forget to think of others.");

    else if (grade4 > grade1 && grade4 > grade2 && grade4 > grade3)
        printf("\t\t Your temperament is sanguine. The sanguine temperament is fundamentally spontaneous and pleasure seeking.\n\t\t Sanguine people are sociable and charismatic. They tend to enjoy so cial gatherings, \n\t\t making new friends and tend to be boisterous. They are usually quite creative and often daydream.\n\t\t However, some alone time is crucial for those of this temperament. \n\t\t Sanguine can also mean sensitive, compassionate and thoughtful. \n\t\tSanguine personalities generally struggle with following tasks all the way through, are chronically late, \n\t\tand tend to be forgetful a nd sometimes a little sarcastic. Often, when they pursue a new hobby, \n\t\t they lose interest as soon as it ceases to be engaging or fun. They are very much people persons.\n\t\t They are talkative and not shy. Sanguines generally have an almost shameless nature, \n\t\tcertain that what they are doing is right. They have no lack of confidence.");

    printf("\n\n");
    printf("\t\t********************************************");

    return 0;
}

int Choleric(int Q1, int Q2, int Q3, int Q4, int Q5, int Q6)
{
    float choleric_sum = Q1 + Q2 + Q3 + Q4 + Q5 + (5 - Q6);
    return (choleric_sum);
}

int Phelegmatic(int QP1, int QP2, int QP3, int QP4, int QP5, int QP6)
{
    float Phelegmatic_sum = QP1 + QP2 + QP3 + QP4 + (5 - QP5) + (5 - QP6);
    return (Phelegmatic_sum);
}

int Melancholic(int QM1, int QM2, int QM3, int QM4, int QM5, int QM6)
{
    float Melancholic_sum = QM1 + QM2 + QM3 + (5 - QM4) + (5 - QM5) + (5 - QM6);
    return (Melancholic_sum);
}

int Sanguine(int QS1, int QS2, int QS3, int QS4, int QS5, int QS6)
{
    float Sanguine_sum = QS1 + QS2 + QS3 + QS4 + QS5 + QS6;
    return (Sanguine_sum);
}

int check(float n)
{
    if (!((n <= 5.000) && (n >= 1.000)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
