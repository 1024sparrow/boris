#ifndef XMLSUBSCRIBER_H
#define XMLSUBSCRIBER_H

#include <QDomDocument>
#include <QObject>

#undef LIBAPP_EXPORTS
#ifdef BORIS_MAKE_DLL
#   define LIBAPP_EXPORTS
#endif
#include <boris_h/dllexport.h>

namespace boris
{

class XmlPublisher;
class LIBAPP_API XmlSubscriber
{
public:
    XmlSubscriber(XmlPublisher *m_publisher);
    virtual ~XmlSubscriber();
    //������ �������� �����. ��������, ��� ���-�� ���� ����������(����������).
    virtual void processXmlDataChanges(const QDomDocument &domdoc, bool ifResetXmlChain) = 0;
protected:
    //� ������ ������ ������ ����������. ���������� ���� ����������� �� ��������� ������.
    void registerXmlDataChanges();

protected:
    QDomDocument m_domdoc;
private:
    XmlPublisher *m_publisher;
friend class XmlPublisher;
};

} // namespace boris

#endif // XMLSUBSCRIBER_H
