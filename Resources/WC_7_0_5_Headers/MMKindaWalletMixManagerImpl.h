//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMKindaWalletMixManager.h"

@class NSString;

@interface MMKindaWalletMixManagerImpl : NSObject <MMKindaWalletMixManager>
{
}

- (id)genControlDataFromTransmitKvData:(id)arg1;
- (id)genWalletMixSpGenprepayRespFromUrl:(id)arg1 data:(id)arg2;
- (void)startWalletMixUseCaseImpl:(id)arg1 data:(id)arg2 successCallback:(id)arg3 cancelCallback:(id)arg4 failCallback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
