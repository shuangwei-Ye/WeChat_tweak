//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface UserIdAuthorizeSmsPageInfo : MMObject
{
    NSString *_title;
    NSString *_desc;
    NSMutableArray *_phoneList;
    NSString *_appid;
    NSMutableArray *_categoryId;
    NSString *_payToken;
    NSString *_ticket;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableArray *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *payToken; // @synthesize payToken=_payToken;
@property(retain, nonatomic) NSMutableArray *phoneList; // @synthesize phoneList=_phoneList;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
