//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, NSMutableArray, NSString;

@protocol ISessionInfoExt <NSObject>

@optional
- (void)onGetDraft:(CBaseContact *)arg1 draft:(NSMutableArray *)arg2;
- (void)onModifyDraft:(CBaseContact *)arg1 draft:(NSString *)arg2 draftTime:(unsigned int)arg3;
@end
