//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, PublishUGCToGameCenterRequest_PictureMeta, PublishUGCToGameCenterRequest_VideoInfo;

@interface PublishUGCToGameCenterRequest_BusinessInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *battleId; // @dynamic battleId;
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(retain, nonatomic) NSMutableArray *groupOpenidList; // @dynamic groupOpenidList;
@property(retain, nonatomic) NSString *picList; // @dynamic picList;
@property(retain, nonatomic) PublishUGCToGameCenterRequest_PictureMeta *picMetaList; // @dynamic picMetaList;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int videoDuration; // @dynamic videoDuration;
@property(nonatomic) unsigned int videoHeight; // @dynamic videoHeight;
@property(retain, nonatomic) PublishUGCToGameCenterRequest_VideoInfo *videoInfo; // @dynamic videoInfo;
@property(nonatomic) unsigned int videoWidth; // @dynamic videoWidth;

@end
