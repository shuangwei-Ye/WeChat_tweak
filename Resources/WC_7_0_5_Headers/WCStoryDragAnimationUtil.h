//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMUIImageView, MMUILabel, MMUIView, NSDate, UIView, WCStoryPreviewReportObj, WCStorysPreviewViewController;

@interface WCStoryDragAnimationUtil : MMObject
{
    _Bool _isFullScreenShowStory;
    _Bool _hasTriggerDragShock;
    _Bool _hasTriggerPlayMuteShock;
    _Bool _isPlayingMuted;
    _Bool _bBackViewShow;
    WCStoryPreviewReportObj *_previewReportObj;
    UIView *_frontView;
    UIView *_backView;
    unsigned long long _utilType;
    WCStorysPreviewViewController *_backViewController;
    MMUIView *_muteBtnView;
    MMUIImageView *_muteBtnImageView;
    MMUILabel *_muteBtnLabel;
    double _frontViewTop;
    CDUnknownBlockType _animationInHide;
    CDUnknownBlockType _hideCompletetion;
    CDUnknownBlockType _autoHideCompletetion;
    CDUnknownBlockType _animationInShow;
    CDUnknownBlockType _showCompletetion;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
}

+ (double)distanceFromtPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (double)distanceToLeftBottom:(struct CGPoint)arg1;
+ (void)errorShock;
+ (void)lightShock;
+ (id)storyDragAnimationUtilWithFrontView:(id)arg1 backView:(id)arg2 frontViewTop:(double)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType animationInHide; // @synthesize animationInHide=_animationInHide;
@property(copy, nonatomic) CDUnknownBlockType animationInShow; // @synthesize animationInShow=_animationInShow;
@property(copy, nonatomic) CDUnknownBlockType autoHideCompletetion; // @synthesize autoHideCompletetion=_autoHideCompletetion;
- (void)autoHideFrontViewCompletetion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool bBackViewShow; // @synthesize bBackViewShow=_bBackViewShow;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak WCStorysPreviewViewController *backViewController; // @synthesize backViewController=_backViewController;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
- (_Bool)canAutoPlayByFirstTakePhoto;
- (void)dealloc;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(nonatomic) __weak UIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic) _Bool hasTriggerDragShock; // @synthesize hasTriggerDragShock=_hasTriggerDragShock;
@property(nonatomic) _Bool hasTriggerPlayMuteShock; // @synthesize hasTriggerPlayMuteShock=_hasTriggerPlayMuteShock;
@property(copy, nonatomic) CDUnknownBlockType hideCompletetion; // @synthesize hideCompletetion=_hideCompletetion;
- (void)hideFrontViewAndPlayMute:(_Bool)arg1;
- (id)initWithFrontView:(id)arg1 backViewController:(id)arg2 frontViewTop:(double)arg3;
@property(nonatomic) _Bool isFullScreenShowStory; // @synthesize isFullScreenShowStory=_isFullScreenShowStory;
- (_Bool)isPanInMuteView:(id)arg1;
@property(nonatomic) _Bool isPlayingMuted; // @synthesize isPlayingMuted=_isPlayingMuted;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
- (void)moveMutePlayViewWithMovement:(double)arg1;
@property(nonatomic) __weak MMUIImageView *muteBtnImageView; // @synthesize muteBtnImageView=_muteBtnImageView;
@property(nonatomic) __weak MMUILabel *muteBtnLabel; // @synthesize muteBtnLabel=_muteBtnLabel;
@property(retain, nonatomic) MMUIView *muteBtnView; // @synthesize muteBtnView=_muteBtnView;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
- (void)processBackViewGestureWithTouchPoint:(struct CGPoint)arg1 andState:(long long)arg2;
- (void)processFrontViewGesture:(id)arg1;
- (void)setHideAnimation:(CDUnknownBlockType)arg1 hideCompletetion:(CDUnknownBlockType)arg2;
- (void)setMutebtnViewBigger:(_Bool)arg1;
- (void)setShowAnimation:(CDUnknownBlockType)arg1 showCompletetion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType showCompletetion; // @synthesize showCompletetion=_showCompletetion;
@property(nonatomic) unsigned long long utilType; // @synthesize utilType=_utilType;
- (void)showFrontView:(_Bool)arg1;

@end
