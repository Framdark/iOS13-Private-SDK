//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <NSObject>
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
@property(nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(nonatomic, readonly) double endXValue;
@property(nonatomic, readonly) double startXValue;
@end

