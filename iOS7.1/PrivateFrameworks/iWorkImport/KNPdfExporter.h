//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNRenderingExporter.h>

#import "TSKEncryptedDocumentExporter.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface KNPdfExporter : KNRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void)setOptions:(id)arg1;
- (void)dealloc;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

@end

