//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EnterpriseSendMsgMgrDelegate.h"
#import "EnterpriseVoiceMsgMgrDelegate.h"
#import "IAudioToMessageExt.h"
#import "IMsgExt.h"
#import "MMService.h"
#import "MessageWrapImgDelegate.h"
#import "OpenDownloadCDNMgrDelegate.h"
#import "OpenUploadCDNMgrDelegate.h"
#import "OpenUploadMgrDelegate.h"
#import "RecordUploadCDNMgrDelegate.h"
#import "UploadImageCDNMgrDelegate.h"

@class DownloadImageCDNMgr, EnterpriseSendMsgMgr, EnterpriseVoiceMsgMgr, MessagePatternCacheMgr, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, OpenDownloadCDNMgr, OpenUploadCDNMgr, OpenUploadMgr, RecordUploadCDNMgr, ThumbDownloadMgr, UploadImageCDNMgr;

@interface EnterpriseMsgMgr : MMService <MMService, IMsgExt, IAudioToMessageExt, MessageWrapImgDelegate, OpenUploadMgrDelegate, OpenUploadCDNMgrDelegate, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate, EnterpriseVoiceMsgMgrDelegate, EnterpriseSendMsgMgrDelegate, RecordUploadCDNMgrDelegate>
{
    NSMutableDictionary *_dicMsgDB;
    NSObject<OS_dispatch_queue> *m_dispatchQueue;
    MessagePatternCacheMgr *_msgPatternMgr;
    UploadImageCDNMgr *_uploadImageCdnMgr;
    DownloadImageCDNMgr *_downloadImageCdnMgr;
    ThumbDownloadMgr *_thumbDownloadMgr;
    OpenDownloadCDNMgr *_openDownloadCdnMgr;
    OpenUploadCDNMgr *_openUploadCDNMgr;
    OpenUploadMgr *_openUploadMgr;
    RecordUploadCDNMgr *_recordUploadCDNMgr;
    EnterpriseVoiceMsgMgr *_voiceMsgMgr;
    EnterpriseSendMsgMgr *_sendMsgMgr;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnErrorBySender:(id)arg1 ErrNo:(int)arg2;
- (void)OnMessageSentBySender:(id)arg1;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnAddMessageBySender:(id)arg1;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onReceiveVoiceMsgStatusChanged:(id)arg1;
- (void)onRecordVoiceMsgSucc:(id)arg1;
- (void)onSendVoiceMsgStatusChanged:(id)arg1;
- (void)onSendMsgStatusChanged:(id)arg1;
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (id)onGetMsg:(id)arg1 LocalID:(unsigned int)arg2 Wrap:(id)arg3;
- (void)onGetBigImageErrorWithWrap:(id)arg1;
- (void)onGetBigImageResultWithWrap:(id)arg1 image:(id)arg2 imageData:(id)arg3 isSaveImgOK:(_Bool)arg4;
- (void)onUploadImageRequestWithWrap:(id)arg1;
- (_Bool)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (void)checkMsgStatus:(id)arg1 Msg:(id)arg2;
- (void)checkMsgList:(id)arg1 chatName:(id)arg2;
- (void)mainThreadNotifyToExt:(id)arg1;
- (void)asyncOnUnReadChange:(id)arg1 Brand:(id)arg2;
- (void)asyncOnDelMsg:(id)arg1 DelAll:(_Bool)arg2 Brand:(id)arg3;
- (void)asyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)asyncOnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)asyncOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)asyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (_Bool)IsImageMsgUploadIng:(id)arg1;
- (unsigned int)GetDownloadThumbStatus:(id)arg1;
- (_Bool)StartDownloadThumb:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StopDownloadImage:(id)arg1 Brand:(id)arg2;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 Brand:(id)arg5;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 Brand:(id)arg5;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Brand:(id)arg4;
- (id)GetImgOrVideoNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Brand:(id)arg4;
- (id)GetImgOrVideoLastMsg:(id)arg1 Brand:(id)arg2;
- (id)GetImgOrVideoLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Brand:(id)arg4;
- (id)GetImgAndVideoMsgList:(id)arg1 Brand:(id)arg2;
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopUploadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StartUploadAppMsg:(id)arg1 Scene:(unsigned int)arg2;
- (void)resendAppMsg:(id)arg1;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3 DataPath:(id)arg4 Scene:(unsigned int)arg5;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3 Data:(id)arg4 Scene:(unsigned int)arg5;
- (void)resendRecordMsg:(id)arg1;
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ForwardFavItem:(id)arg1 toBizChatId:(id)arg2 brand:(id)arg3;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (_Bool)sendVoiceMsgByUserData:(id)arg1;
- (void)DelMsgPatten:(id)arg1;
- (void)AddMsgPattern:(id)arg1;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3 Brand:(id)arg4;
- (void)DelAllMsgForBrand:(id)arg1 chatNameList:(id)arg2;
- (void)stopUploadDownloadMgr:(id)arg1;
- (id)getDispatchQueue;
- (void)ModMsgStatusWithoutNotify:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)MergeImgStatus:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 Brand:(id)arg4;
- (void)ModMsgStatus:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ClearUnReadForSync:(id)arg1 Brand:(id)arg2 CreateTime:(unsigned int)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3 Brand:(id)arg4;
- (_Bool)isMsgTypeCanSend:(id)arg1;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3;
- (unsigned int)GetUnReadCount:(id)arg1 Since:(unsigned int)arg2 Brand:(id)arg3;
- (unsigned int)GetUnReadCount:(id)arg1 Brand:(id)arg2;
- (id)GetFirstUnreadMsg:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetLastMsgCreateTime:(id)arg1 Brand:(id)arg2;
- (id)GetLastMsg:(id)arg1 Brand:(id)arg2;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5 Brand:(id)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5 Brand:(id)arg6;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5 Brand:(id)arg6;
- (void)ForwardMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)BatchAddEnterpriseMsgList:(id)arg1 NotifyArrayMessage:(id)arg2;
- (void)deleteMsgDB:(id)arg1;
- (id)getMsgDB:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

