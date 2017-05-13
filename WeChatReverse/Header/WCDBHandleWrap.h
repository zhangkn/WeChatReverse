//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSThread;

@interface WCDBHandleWrap : NSObject
{
    NSThread *m_usedThread;
    struct sqlite3 *m_handle;
    id <WCDBHandleWrapProtocol> m_delegate;
    unsigned long long m_status;
    int m_threadedRetainCount;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)resetStatus;
- (void)updateStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (void)releaseAtCurrentThread;
- (void)retainAtCurrentThread;
- (void)reset;
@property(readonly, nonatomic) __weak NSThread *usedThread;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (id)initWithHandle:(struct sqlite3 *)arg1 andDelegate:(id)arg2;

@end

