//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class GetCreateTokenSignReq;

@interface HoneyPayGetCreateTokenSignCgi : WCPayBaseCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)init;
- (void)startRequest;

// Remaining properties
@property(nonatomic) __weak id <HoneyPayGetCreateTokenSignCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GetCreateTokenSignReq *request; // @dynamic request;

@end
