//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView
{
    double _rating;
    NSArray *_starViews;
}

@property(retain, nonatomic) NSArray *starViews; // @synthesize starViews=_starViews;
@property(nonatomic) double rating; // @synthesize rating=_rating;
// - (void).cxx_destruct;
- (void)updateStarViews;
- (void)setupConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end
