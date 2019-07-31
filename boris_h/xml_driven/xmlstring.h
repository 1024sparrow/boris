/*
 * author VasilyevBP
 * codepage cp1251
 *
 * ��� ������ - xml-�������� ��� ����������� XmlDelegate-��
 * ���� XmlString ���������� � QVariant, �������� �������, ������� �����,
 * ��� ����� ���� � XML, � �� � ������� �������
 *
 * 17 ���� 2016�.
 */

#ifndef XMLSTRING_H
#define XMLSTRING_H

#include <QString>
#include <QVariant>

#undef LIBAPP_EXPORTS
#ifdef BORIS_MAKE_DLL
#   define LIBAPP_EXPORTS
#endif
#include <boris_h/dllexport.h>

namespace boris
{

//typedef QString XmlString;
struct LIBAPP_API XmlString
{
    XmlString(const QString &t = QString())
    {
        text = t;
    }
    QString text;
};

} // namespace boris

Q_DECLARE_METATYPE(boris::XmlString)

#endif // XMLSTRING_H
