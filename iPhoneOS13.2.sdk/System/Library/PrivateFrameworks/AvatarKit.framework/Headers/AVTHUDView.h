//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UILabel;

@interface AVTHUDView : UIView
{
    UILabel *_totalLatencyLabel;
    UILabel *_arKitLatencyLabel;
    UILabel *_updateSyncLatencyLabel;
    UILabel *_metalLatencyLabel;
    UILabel *_fpsLabel;
    UILabel *_audioTimeLabel;
    UILabel *_timeBetweenARFrameLabel;
    UILabel *_droppedFrameLabel;
    UILabel *_shaderCompilationLabel;
    CDStruct_53ba08a1 _lastFrameData;
    CALayer *_arKitLatencyBar;
    CALayer *_updateLatencyBar;
    CALayer *_metalLatencyBar;
    NSMutableArray *_totalLatencyGraphLayers;
    int _selectedGraphIndex;
}

- (void)_tapAction:(id)arg1;
- (void)_loadSubviews;
- (id)_label;
- (void)_updateLatencyGraph:(CDStruct_53ba08a1 *)arg1;
- (void)_updateLatencyBar:(CDStruct_53ba08a1 *)arg1;
- (void)layoutSubviews;
- (void)updateWithData:(CDStruct_53ba08a1)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
