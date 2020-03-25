//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSPointerArray, NSString, UIImage;

@interface WGWidgetInfo : NSObject
{
    NSPointerArray *_registeredWidgetHosts;
    struct {
        unsigned int didInitializeWantsVisibleFrame:1;
    } _widgetInfoFlags;
    BOOL _wantsVisibleFrame;
    NSString *_sdkVersion;
    NSExtension *_extension;
    long long _initialDisplayMode;
    long long _largestAllowedDisplayMode;
    UIImage *_icon;
    UIImage *_outlineIcon;
    NSString *_displayName;
    CGSize _preferredContentSize;
}

+ (id)_productVersion;
+ (double)maximumContentHeightForCompactDisplayMode;
+ (void)_updateRowHeightForContentSizeCategory;
+ (id)widgetInfoWithExtension:(id)arg1;
@property(copy, nonatomic, setter=_setDisplayName:) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic, getter=_outlineIcon, setter=_setOutlineIcon:) UIImage *outlineIcon; // @synthesize outlineIcon=_outlineIcon;
@property(retain, nonatomic, getter=_icon, setter=_setIcon:) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic, setter=_setLargestAllowedDisplayMode:) long long largestAllowedDisplayMode; // @synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode;
@property(readonly, nonatomic) long long initialDisplayMode; // @synthesize initialDisplayMode=_initialDisplayMode;
@property(nonatomic) CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
// - (void).cxx_destruct;
- (void)updatePreferredContentSize:(CGSize)arg1 forWidgetHost:(id)arg2;
- (void)registerWidgetHost:(id)arg1;
@property(nonatomic, setter=_setWantsVisibleFrame:) BOOL wantsVisibleFrame; // @synthesize wantsVisibleFrame=_wantsVisibleFrame;
@property(readonly, nonatomic) double initialHeight;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1;
@property(readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void)_resetIcons;
- (void)_resetIconsImpl;
- (void)requestSettingsIconWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)requestIconWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_requestIcon:(BOOL)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
@property(readonly, copy, nonatomic) NSString *widgetIdentifier;
- (id)widgetInfoWithExtension:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end
