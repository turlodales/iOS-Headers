//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TKTonePickerController, TKTonePickerItem;

@protocol TKTonePickerControllerDelegateInternal <NSObject>

@optional
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(TKTonePickerController *)arg1;
- (void)tonePickerControllerRequestsPresentingToneStore:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPresentingToneClassicsPickerForItem:(TKTonePickerItem *)arg2;
- (void)tonePickerControllerDidStopPlaying:(TKTonePickerController *)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 didSelectMediaItemAtIndex:(unsigned int)arg2 selectionDidChange:(BOOL)arg3;
- (unsigned int)tonePickerController:(TKTonePickerController *)arg1 indexOfMediaItemWithIdentifier:(NSNumber *)arg2;
- (NSString *)tonePickerController:(TKTonePickerController *)arg1 titleOfMediaItemAtIndex:(unsigned int)arg2;
- (NSNumber *)tonePickerController:(TKTonePickerController *)arg1 identifierOfMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfMediaItemsInTonePickerController:(TKTonePickerController *)arg1;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(TKTonePickerController *)arg1;
- (BOOL)tonePickerControllerShouldShowMedia:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
@end

