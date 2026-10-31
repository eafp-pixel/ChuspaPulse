#pragma once

#include <string>

namespace chuspapulse {
    struct MetricSnapshot;
    namespace alertas { class GestorAlertas; }
}

namespace chuspapulse::http {

/**
 * @brief Genera el JSON de GET /alerts con las alertas activas para el snapshot dado.
 */
std::string handleAlerts(const chuspapulse::alertas::GestorAlertas& gestor,
                         const chuspapulse::MetricSnapshot& snap);

} // namespace chuspapulse::http
