//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFFavoriteLocationProvider-Protocol.h>

@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>
{
    id <WFFavoriteLocationProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)removeLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)locationFromCity:(id)arg1;
- (id)locations;
- (BOOL)canProvideDefaultFavorites;
- (id)init;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;

@end
