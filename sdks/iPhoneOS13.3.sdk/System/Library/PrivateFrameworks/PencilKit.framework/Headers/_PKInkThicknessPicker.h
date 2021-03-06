//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    NSArray *_thicknessButtons;
}

+ (CGRect)_buttonFrameForButtonIndex:(long long)arg1;
+ (double)_nearestButtonWeightForWeight:(double)arg1;
+ (double)_weightForButtonFrame:(CGRect)arg1;
+ (CGRect)_buttonFrameForWeight:(double)arg1;
+ (double)_weightForButtonIndex:(long long)arg1;
+ (long long)_nearestButtonIndexForWeight:(double)arg1;
@property(retain, nonatomic) NSArray *thicknessButtons; // @synthesize thicknessButtons=_thicknessButtons;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
// - (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithInkIdentifier:(id)arg1;

@end

