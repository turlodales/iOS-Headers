/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GMMProjectionProperties : PBCodable
{
    BOOL _hasPanoYawDegreeE6;
    int _panoYawDegreeE6;
    BOOL _hasTiltYawDegreeE6;
    int _tiltYawDegreeE6;
    BOOL _hasTiltPitchDegreeE6;
    int _tiltPitchDegreeE6;
    BOOL _hasCameraPitchDegreeE6;
    int _cameraPitchDegreeE6;
    BOOL _hasProjectionType;
    int _projectionType;
    BOOL _hasHorizontalFovE6;
    int _horizontalFovE6;
    BOOL _hasMinVisiblePitchE6;
    int _minVisiblePitchE6;
    BOOL _hasMaxVisiblePitchE6;
    int _maxVisiblePitchE6;
}

@property(nonatomic) BOOL hasMaxVisiblePitchE6; // @synthesize hasMaxVisiblePitchE6=_hasMaxVisiblePitchE6;
@property(nonatomic) BOOL hasMinVisiblePitchE6; // @synthesize hasMinVisiblePitchE6=_hasMinVisiblePitchE6;
@property(nonatomic) BOOL hasHorizontalFovE6; // @synthesize hasHorizontalFovE6=_hasHorizontalFovE6;
@property(nonatomic) BOOL hasProjectionType; // @synthesize hasProjectionType=_hasProjectionType;
@property(nonatomic) BOOL hasCameraPitchDegreeE6; // @synthesize hasCameraPitchDegreeE6=_hasCameraPitchDegreeE6;
@property(nonatomic) BOOL hasTiltPitchDegreeE6; // @synthesize hasTiltPitchDegreeE6=_hasTiltPitchDegreeE6;
@property(nonatomic) BOOL hasTiltYawDegreeE6; // @synthesize hasTiltYawDegreeE6=_hasTiltYawDegreeE6;
@property(nonatomic) BOOL hasPanoYawDegreeE6; // @synthesize hasPanoYawDegreeE6=_hasPanoYawDegreeE6;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int maxVisiblePitchE6; // @synthesize maxVisiblePitchE6=_maxVisiblePitchE6;
@property(nonatomic) int minVisiblePitchE6; // @synthesize minVisiblePitchE6=_minVisiblePitchE6;
@property(nonatomic) int horizontalFovE6; // @synthesize horizontalFovE6=_horizontalFovE6;
@property(nonatomic) int projectionType; // @synthesize projectionType=_projectionType;
@property(nonatomic) int cameraPitchDegreeE6; // @synthesize cameraPitchDegreeE6=_cameraPitchDegreeE6;
@property(nonatomic) int tiltPitchDegreeE6; // @synthesize tiltPitchDegreeE6=_tiltPitchDegreeE6;
@property(nonatomic) int tiltYawDegreeE6; // @synthesize tiltYawDegreeE6=_tiltYawDegreeE6;
@property(nonatomic) int panoYawDegreeE6; // @synthesize panoYawDegreeE6=_panoYawDegreeE6;
- (void)dealloc;

@end

