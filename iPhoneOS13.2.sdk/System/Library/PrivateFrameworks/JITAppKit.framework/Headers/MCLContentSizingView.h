//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TKKeyPathObserver, UIScrollView;

@interface MCLContentSizingView : UIView
{
    TKKeyPathObserver *_observer;
    UIScrollView *_contentView;
}

@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)intrinsicContentSize;

@end
