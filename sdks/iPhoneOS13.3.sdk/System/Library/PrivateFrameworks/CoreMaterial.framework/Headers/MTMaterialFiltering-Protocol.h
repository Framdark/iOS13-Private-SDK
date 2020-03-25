//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol MTMaterialFiltering <NSObject>
@property(readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) struct CAColorMatrix colorMatrix;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic, getter=isAverageColorEnabled) BOOL averageColorEnabled;
@property(readonly, nonatomic) double blurRadius;
@property(readonly, copy, nonatomic) NSArray *luminanceValues;
@property(readonly, nonatomic) double luminanceAmount;
@end
