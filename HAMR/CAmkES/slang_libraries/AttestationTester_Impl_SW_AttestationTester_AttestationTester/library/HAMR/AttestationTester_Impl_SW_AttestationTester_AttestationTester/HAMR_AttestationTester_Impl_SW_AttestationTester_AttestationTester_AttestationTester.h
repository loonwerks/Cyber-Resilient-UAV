#ifndef SIREUM_H_HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester
#define SIREUM_H_HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init(STACK_FRAME_ONLY);

HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationTesterBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_noData(STACK_FRAME_ONLY);
Z HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationRequest_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationRequest_port(STACK_FRAME_ONLY);
void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationRequest_port);
Z HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationResponse_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationResponse_port(STACK_FRAME_ONLY);
void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_AttestationResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationResponse_port);

Z HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_main(STACK_FRAME IS_948B60 args);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_initialiseArchitecture(STACK_FRAME_ONLY);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_computeEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_touch(STACK_FRAME_ONLY);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logInfo(STACK_FRAME String title, String msg);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logDebug(STACK_FRAME String title, String msg);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logError(STACK_FRAME String title, String msg);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_AttestationTesterBridge(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_entryPoints(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_noData(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_AttestationRequest_id(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_AttestationRequest_port(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_AttestationResponse_id(STACK_FRAME_ONLY);

void HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_init_AttestationResponse_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif