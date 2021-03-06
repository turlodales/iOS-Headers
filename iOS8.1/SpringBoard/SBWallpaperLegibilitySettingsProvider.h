//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFLegibilitySettingsProvider.h"
#import "SBWallpaperObserver.h"

@class NSString, _UILegibilitySettings;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider>
{
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    long long _variant;
}

@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
@property(readonly, retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

