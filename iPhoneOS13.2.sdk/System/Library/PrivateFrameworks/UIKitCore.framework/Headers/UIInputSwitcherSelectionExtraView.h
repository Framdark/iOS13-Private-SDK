//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView
{
    double m_pointerOffset;
    unsigned long long _roundedCorners;
    UIKeyboardMenuView *_menu;
    struct CGRect _keyRect;
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
