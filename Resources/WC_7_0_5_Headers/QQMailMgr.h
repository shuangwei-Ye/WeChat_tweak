//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "IQQMailExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString, QQMailHttpRespHandler;

@interface QQMailMgr : MMService <IMsgExt, MMService, IQQMailExt>
{
    _Bool m_bSyncingContact;
    unsigned int m_uiSyncCount;
    NSMutableDictionary *m_dicCookie;
    int mailUnreadCount;
    QQMailHttpRespHandler *mHandler;
}

- (void).cxx_destruct;
- (void)ComposeSend:(id)arg1 sendtype:(unsigned int)arg2 mailid:(id)arg3;
- (id)CreateAttachList:(struct XmlReaderNode_t *)arg1;
- (void)DeleteMailByMailId:(id)arg1;
- (id)GetAllMailContact;
- (id)GetAttachListFromCompressInfo:(id)arg1;
- (void)GetAttachPic:(id)arg1;
- (id)GetCookie;
- (id)GetCookieString;
- (id)GetFilePathOfCompressInfo:(id)arg1;
- (id)GetMail:(id)arg1;
- (id)GetMailCompressInfo:(id)arg1;
- (void)LoadMail:(id *)arg1 byMailId:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResetSyncCount;
- (void)SaveCompressInfo:(id)arg1 Path:(id)arg2;
- (void)SaveMail:(id)arg1 byMailId:(id)arg2;
- (void)SetCookie:(id)arg1;
- (void)SetMailUnread:(id)arg1;
- (void)SyncContact;
- (void)SyncMailUnreadCount;
- (void)UploadAttachmentData:(id)arg1 fileName:(id)arg2;
- (void)UploadData:(id)arg1 filename:(id)arg2;
- (void)dealloc;
- (int)getMailUnreadCount;
- (void)handleMailUnreadCount:(int)arg1;
- (id)init;
@property(retain, nonatomic) QQMailHttpRespHandler *mHandler; // @synthesize mHandler;
@property(retain, nonatomic) NSMutableDictionary *m_dicCookie; // @synthesize m_dicCookie;
- (void)setBoundary:(id)arg1;
- (void)setLastBoundary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
