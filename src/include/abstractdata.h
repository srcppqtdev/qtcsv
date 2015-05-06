#ifndef ABSTRACTDATA_H
#define ABSTRACTDATA_H

#include <QStringList>

#include "qtcsv_global.h"

namespace QtCSV
{
    // Pure abstract class that provide interface for concrete classes,
    // that can hold data (information) and be used with Reader or Writer
    // classes
    class QTCSVSHARED_EXPORT AbstractData
    {
    public:
        explicit AbstractData() {}
        virtual ~AbstractData() {}

        // Add empty row
        virtual void addEmptyRow() = 0;
        // Add new row with values as strings
        virtual void addRow(const QStringList &values) = 0;
        // Clear all data
        virtual void clear() = 0;
        // Get number of rows
        virtual int getNumberOfRows() const = 0;
        // Get values (as strings) of specified row
        virtual QStringList getRowValues(const int &row) const = 0;
        // Check if there are any data
        virtual bool isEmpty() const = 0;
    };
}

#endif // ABSTRACTDATA_H
