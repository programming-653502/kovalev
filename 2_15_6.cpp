#include<iostream>
#define averagePayment 400
#define workingHours 8
#define pricePerHour 9

static int LengthOfProject=0;
static int CostOfProject=0;
static int numberOfWorkers = 0;
static int numberOfWorkingDays = 0;
static double costOfProject = 0.0;
static double profit = 0.0;


void inputDate()
{
    int day, month, year, Day, Month, Year;
    printf("Введите дату начала проекта в формате : День Месяц Год \n");
    scanf("%d%d%d", &day, &month, &year);
    printf("Введите дату конца проекта в формате : День Месяц Год \n");
    scanf("%d%d%d", &Day, &Month, &Year);
    LengthOfProject = 365 * (Year - year) + 30 * (Month - month) + (Day - day);
}

void inputNumberOfWorkers()
{
    int numOfWorkers;
    printf("Введите кол-во работников: ");
    scanf("%d", &numOfWorkers);
    numberOfWorkers = numOfWorkers;
}

void viewTheLengthOfProject()
{
    printf("Длина проекта в днях: %d\n", LengthOfProject);
    numberOfWorkingDays = (LengthOfProject * 5) / 7;
    printf("Длина проекта в рабочих днях %d\n", numberOfWorkingDays);
}

void getTheDifficultyOfProject()
{
    if (numberOfWorkers <= 0)
    {
        printf("Ошибка ввода работников");
        return;
    }
    else
    {
        double humanPerDays = ((double)(numberOfWorkers*numberOfWorkingDays)) / ((double)LengthOfProject);
        double humanPerHours = humanPerDays*(8.0 / 24.0);
        printf("Среднее человек/день: %f\n", humanPerDays);
        printf("Среднее человек/час: %f\n", humanPerHours);
    }
}

void calculateTheCostOfProject()
{
    double payment = numberOfWorkers*averagePayment*((double)LengthOfProject / 30);
    double price = LengthOfProject*pricePerHour*24;
    profit = price - payment;
    printf("Сумма которую вы заплатите работникам: %f\n", payment);
    printf("Сумма которую мы получите: %f\n", price);
}

void getThePrice()
{
    printf("Прибыль: %f\n", profit);
    if (profit < 1000)printf("Не рекомендуется(<$1000)\n");
    else printf("Рекомендуется(<$1000)\n");
}

void getInformationAboutProgram()
{
    printf("Программа разработана студентом 653502 группы Ковалевым Дмитрием\n");
}

int main(void)
{
    char a = '\0';
    while (a!='e')
    {
        printf("1. Ввод дат начала и конца проекта\n");
        printf("2. Ввод кол-ва работников\n");
        printf("3. Показать длину проекта \n");
        printf("4. человек/день и человек/час\n");
        printf("5. Показать прибыль проекта\n");
        printf("6. Получаить рекомендацию\n");
        printf("7. Информация о программе\n");
        printf("8. Выход\n");
        
        a = getchar();
        
        switch (a)
        {
            case '1':
                inputDate();
                break;
            case '2':
                inputNumberOfWorkers();
                break;
            case '3':
                viewTheLengthOfProject();
                break;
            case '4':
                getTheDifficultyOfProject();
                break;
            case '5':
                calculateTheCostOfProject();
                break;
            case '6':
                getThePrice();
                break;
            case '7':
                getInformationAboutProgram();
                break;
            case '8':
                return 0;
                break;
            default:
                printf("введите еще раз:");

                break;
        }
    }
    return 0;
}
