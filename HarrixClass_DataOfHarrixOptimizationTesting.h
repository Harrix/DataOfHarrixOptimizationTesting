//HarrixClass_DataOfHarrixOptimizationTesting
//Версия 1.21
//Класс для считывания информации формата данных Harrix Optimization Testing на C++ для Qt.
//https://github.com/Harrix/HarrixClass_DataOfHarrixOptimizationTesting
//Библиотека распространяется по лицензии Apache License, Version 2.0.

#ifndef HARRIXCLASS_DATAOFHARRIXOPTIMIZATIONTESTING_H
#define HARRIXCLASS_DATAOFHARRIXOPTIMIZATIONTESTING_H

#include "HarrixClass_OnlyDataOfHarrixOptimizationTesting.h"
#include <QXmlStreamReader>

class HarrixClass_DataOfHarrixOptimizationTesting
{
public:
    HarrixClass_DataOfHarrixOptimizationTesting(QString filename);
    HarrixClass_DataOfHarrixOptimizationTesting();
    ~HarrixClass_DataOfHarrixOptimizationTesting();
    void operator = (HarrixClass_DataOfHarrixOptimizationTesting& B);

    bool getSuccessReading();//Получение значения переменной SuccessReading о удачности или неудачности считывания файла.
    QString getHtml();//Получение текста переменной Html
    QString getHtmlReport();//Получение текста переменной HtmlReport. Это часть html документа в виде отчета о проделанной работе.
    QString getHtmlMessageOfError();//Получение текста переменной HtmlMessageOfError. Это часть html документа в виде кода о сообщениях ошибок.

    QString getLatex();//Получение текста переменной Latex
    QString getLatexTable();//Получение текста переменной LatexTable - всё без анализа
    QString getLatexTableEx();//Получение текста переменной LatexTableEx - отображение таблицы данных о ошибке Ex.
    QString getLatexTableEy();//Получение текста переменной LatexTableEy - отображение сырых данных ошибки по значениям целевой функции в виде полной таблицы.
    QString getLatexTableR();//Получение текста переменной LatexTableR - отображение сырых данных по надежности в виде полной таблицы.
    QString getLatexInfo();//Получение текста переменной LatexTableR - отображение информации о исследовании.
    QString getLatexAboutParameters();//Получение текста переменной LatexAboutParameters - отображение данных о обнаруженных параметрах алгоритма и какие они бывают.
    QString getLatexAnalysis();//Получение текста переменной LatexAnalysis - отображение первоначального анализа данных.

    QString getFullLatex();//Получение текста переменной Latex в полном составе с началом и концовкой в Latex файле.
    QString getFullLatexTable();//Получение текста переменной LatexTable - всё без анализа - в полном составе с началом и концовкой в Latex файле
    QString getFullLatexTableEx();//Получение текста переменной LatexTableEx - отображение сырых данных таблицы данных о ошибке Ex с началом и концовкой в Latex файле.
    QString getFullLatexTableEy();//Получение текста переменной LatexTableEy - отображение сырых данных таблицы данных о ошибке Ey с началом и концовкой в Latex файле.
    QString getFullLatexTableR();//Получение текста переменной LatexTableR - отображение сырых данных по надежности в виде полной таблицы с началом и концовкой в Latex файле.
    QString getFullLatexInfo();//Получение текста переменной LatexInfo - отображение информации о исследовании с началом и концовкой в Latex файле.
    QString getFullLatexAboutParameters();//Получение текста переменной LatexAboutParameters - отображение данных о обнаруженных параметрах алгоритма и какие они бывают с началом и концовкой в Latex файле.
    QString getFullLatexAnalysis();//Получение текста переменной LatexAnalysis - отображение данных первоначального анализа данных.

    QString getAuthor();//Получение текста переменной XML_Author - Автор документа
    QString getDate();//Получение текста переменной XML_Date - Дата создания документа
    QString getEmail();//Получение текста переменной XML_Email - Email автора, чтобы можно было с ним связаться
    QString getLinkTestFunction();//Получение текста переменной XML_Link_Test_Function - Ссылка на описание тестовой функции
    QString getLinkAlgorithm();//Получение текста переменной XML_Link_Algorithm - Ссылка на описание алгоритма оптимизации
    QString getNameAlgorithm();//Получение текста переменной XML_Name_Algorithm - Название алгоритма оптимизации
    QString getFullNameAlgorithm();//Получение текста переменной XML_Full_Name_Algorithm - Полное название алгоритма оптимизации
    QString getNameTestFunction();//Получение текста переменной XML_Name_Test_Function - Название тестовой функции
    QString getFullNameTestFunction();//Получение текста переменной XML_Full_Name_Test_Function - Полное название тестовой функции
    qint64 getDimensionTestFunction();//Получение текста переменной XML_DimensionTestFunction - Размерность тестовой задачи (длина хромосомы решения)
    qint64 getNumberOfMeasuring();//Получение текста переменной XML_Number_Of_Measuring - Размерность тестовой задачи (длина хромосомы решения)
    qint64 getNumberOfRuns();//Получение текста переменной XML_Number_Of_Runs - Количество прогонов по которому делается усреднение для эксперимента
    qint64 getMaxCountOfFitness();//Получение текста переменной Max_Count_Of_Fitness - Максимальное допустимое число вычислений целевой функции для алгоритма
    qint64 getNumberOfParameters();//Получение текста переменной XML_Number_Of_Parameters - Количество проверяемых параметров алгоритма оптимизации
    qint64 getNumberOfExperiments();//Получение текста переменной XML_Number_Of_Experiments - Количество комбинаций вариантов настроек
    bool getCheckAllCombinations();//Получение текста переменной XML_All_Combinations - Все ли комбинации вариантов настроек просмотрены: 0 или 1
    double getErrorEx(int Number_Of_Experiment, int Number_Of_Measuring);//Получение значения ошибки Ex.
    double getErrorEy(int Number_Of_Experiment, int Number_Of_Measuring);//Получение значения ошибки Ey.
    double getErrorR(int Number_Of_Experiment, int Number_Of_Measuring);//Получение значения надежности R.
    double getMeanEx(int Number_Of_Experiment);//Получение среднего значения ошибки Ex по измерениям для настройки (сколько точек было по столько и усредняем).
    double getMeanEy(int Number_Of_Experiment);//Получение среднего значения ошибки Ey по измерениям для настройки (сколько точек было по столько и усредняем).
    double getMeanR(int Number_Of_Experiment);//Получение среднего значения надежности R по измерениям для настройки (сколько точек было по столько и усредняем).
    double getVarianceOfEx(int Number_Of_Experiment);//Получение дисперсии значения ошибки Ex по измерениям для настройки (сколько точек было по столько и усредняем).
    double getVarianceOfEy(int Number_Of_Experiment);//Получение дисперсии значения ошибки Ey по измерениям для настройки (сколько точек было по столько и усредняем).
    double getVarianceOfR(int Number_Of_Experiment);//Получение дисперсии значения надежности R по измерениям для настройки (сколько точек было по столько и усредняем).
    int getParameter(int Number_Of_Experiment, int Number_Of_Parameter);//Получение значения параметра настройки какой-то.
    QString getNameParameter(int Number_Of_Experiment, int Number_Of_Parameter);//Получение значения параметра настройки какой-то в виде полного наименования.
    QString getNameOption(int Number_Of_Parameter);//Получение имени параметра алгоритма по его номеру.
    int getNumberOfOption(QString NameOption);//Получение номера параметра алгоритма по его имени.
    QString getFormat();//Получение переменной XML_Format, то есть возвращает название формата документа.
    QString getVersion();//Получение переменной XML_Version, то есть возвращает версию формата документа.
    QString getLink();//Возвращает ссылку на описание формата файла.

private:
    void readXml();//Считывание XML файла и осуществление всех остальных анализов и др.
    void makingLatexTableR();//Создает текст LaTeX для отображения сырых данных по надежности в виде полной таблицы.
    void makingLatexTableEy();//Создает текст LaTeX для отображения сырых данных ошибки по значениям целевой функции в виде полной таблицы.
    void makingLatexTableEx();//Создает текст LaTeX для отображения сырых данных ошибки по входным параметрам в виде полной таблицы.
    void makingLatexInfo();//Создает текст LaTeX для отображения информации о исследовании.
    void makingLatexAboutParameters();//Создает текст LaTeX для отображения данных о обнаруженных параметрах алгоритма и какие они бывают.
    void makingLatexAnalysis();//Создает текст LaTeX для отображения первоначального анализа данных.
    void makingLatexListOfVectorParameterOptions();//Создает текст LaTeX для отображения списка вектора названий вариантов параметров алгоритма оптимизации.
    void makingHtmlReport();//Создает текст Html для отображения отчета о считывании XML файла.
    QString getLatexEnd();//Внутренняя функция. Возвращает концовку для полноценного Latex файла.
    QString getLatexBegin();//Внутренняя функция. Возвращает начало для полноценного Latex файла.

    void readXmlLeafTag();//Считывает и проверяет тэг, который должен являться "листом", то есть самым глубоким. Внутренняя функция.
    void checkXmlLeafTags();//Проверяет наличие тэгов и правильное их выполнение. Внутренняя функция.
    void memoryAllocation();//Выделяет память под необходимые массивы. Внутренняя функция.
    void memoryDeallocation();//Удаляет память из-под массивов. Внутренняя функция.
    void initializationOfVariables();//Обнуление переменных. Внутренняя функция.
    void readXmlDataTags();//Считывает и проверяет тэги данных. Внутренняя функция.
    bool readXmlTreeTag(QString tag);//Считывает и проверяет тэг, который содержит внутри себя другие тэги. Внутренняя функция.
    void zeroArray();//Обнуляет массивы, в котрые записывается информация о данных из файла. Внутренняя функция.
    void makingAnalysis();//Выполняет анализ считанных данных. Внутренняя функция.
    void makingListOfVectorParameterOptions();//заполняет список вектора названий вариантов параметров алгоритма оптимизации.

	//Главные переменные
    HarrixClass_OnlyDataOfHarrixOptimizationTesting Data;//сырые данные исследований, считываемые из FileXML
    QString FileXML;//сохраняем на всякий случай содержимое файла	
	QXmlStreamReader Rxml;//непосредственно анализируемый XML файл

    //Строка с возвращаемым HTML кодом
    QString Html;
    //далее идет набор переменных для кусков Html кодов
    QString HtmlMessageOfError;// сюда записывается код о сообщениях ошибок
    QString HtmlReport;//текст Html для отображения отчета о считывании XML файла.

    //Строка с возвращаемым кодом  Latex для добавления в https://github.com/Harrix/Harrix-Document-Template-LaTeX
    QString Latex;
    QString LatexTable;//Первичная информация плюс таблицы. Без анализа
    //далее идет набор переменных для кусков Latex кодов
    QString LatexTableEx;//для отображения таблицы данных о ошибке Ex
    QString LatexTableEy;//для отображения таблицы данных о ошибке Ey
    QString LatexTableR; //для отображения таблицы данных о надежности R
    QString LatexInfo;//Для отображения информации о исследовании
    QString LatexAboutParameters;//Для отображения данных о обнаруженных параметрах алгоритма и какие они бывают
    QString LatexAnalysis;//Для отображения первоначального анализа данных.
    QString LatexListOfVectorParameterOptions;//Для отображения списка вектора параметров алгоритма

    //Номера комбинаций вариантов настроек
    //Содержит номера от 1 до XML_Number_Of_Experiments
    //Дополнительный вектор, чтобы понимать, какой номер у
    //эксперимента с настройками из ListOfVectorParameterOptions
    double *NumberOfListOfVectorParameterOptions;

    //далее идут внутренние служебные переменные
    QString Un;//уникальная строка для использования ссылок в Latex
    QString NameForHead;//тот кусок, который будет вставляться в таблицы, заголовки: какой-то алгоритм оптимизации на такой-то тестовой функции такой-то размерности.
    QString Cell1,Cell2,Cell3,Cell4,Cell5;//для записи ячеек в полные таблицы
    QString Parbox;//нужно или не нужно делать в формулах фиксированную ячейку для длинного текста
    QString NameOfElement;//имя тэга
    QString TextOfElement;//содержимое тэга
    QString AttrOfElement;//содержимое атрибута тэга
    QString NameOfAttr;//название атрибута тэга
    bool Error;//есть ли ошибка при анализе XML файла
    bool Zero_Number_Of_Parameters;//Число параметров равно нулю или нет
};
#endif // HARRIXCLASS_DATAOFHARRIXOPTIMIZATIONTESTING_H